#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]) {
	if (argc < 2) 
	{
		return EXIT_FAILURE;
	}
	char systemname[7] = {0};
	char systemport[5] = {0};
	int operationchoice = 0;
	int i, j = 0;
	char ch;
	char message[1024];
	FILE* fp;
	FILE* fp1;
	char machines[4][13] = {0};
	int machinech;
	char umsg[1024] = {0};

	strncpy(systemname, argv[1], 6);
	systemname[6] = '\0';

	char sendfile[10] = "BM";
	char recfile[10] = "EB";
	printf("My name:%s \n",argv[1]);

	while (operationchoice != 3) {
		printf("Select:\n1. Send Message\n2. Receive Message\n3. Stop\n");
		scanf("%d", &operationchoice);
		i = 0;

		switch (operationchoice) {
			case 1:
				snprintf(sendfile, sizeof(sendfile), "BM%s", systemname);
				if ((fp = fopen("systems", "rb")) != NULL) {
					while (!feof(fp)) {
						ch = fgetc(fp);
						if (ch == ',' || ch == EOF) {
							machines[i][j] = '\0';
							if (strncmp(machines[i], systemname, 6) != 0) {
								printf("%d : %s\n", i + 1, machines[i]);
								i++;
							}
							j = 0;
						} else {
							machines[i][j++] = ch;
						}
					}
					fclose(fp);
				}

				scanf("%d", &machinech);
				getchar();

				strncpy(systemport, &machines[machinech][7], 4);
				systemport[4] = '\0';

				printf("Enter Message to send for %s: ",machines[machinech]);
				fgets(message, sizeof(message), stdin);
				message[strcspn(message, "\n")] = '\0';

				if ((fp1 = fopen(sendfile, "ab")) != NULL) {
					fwrite(systemport, 1, 4, fp1);
					fwrite("|", 1, 1, fp1);
					fwrite(message, 1, strlen(message), fp1);
					fwrite("\t", 1, 1, fp1);
					fclose(fp1);
				} else {
					perror("Error opening send file");
				}

				break;

			case 2:
				snprintf(recfile, sizeof(recfile), "EB%s", systemname);

				if ((fp1 = fopen(recfile, "rb")) != NULL) {
					i = 0;
					while ((ch = fgetc(fp1)) != EOF) {
						umsg[i++] = ch;
					}
					umsg[i] = '\0';

					printf("Received message: %s\n", umsg);

					fclose(fp1);
					remove(recfile);
				} else {
					printf("No received messages");
				}

				break;

			case 3:
				return 0; 

			default:
				printf("Invalid choice.\n");

		}

	}

	return 0;
}

