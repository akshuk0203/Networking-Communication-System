#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define BUFLEN 1024

int sockfd, len, n, PORTLISTEN;
char buffer[BUFLEN];
char machineport[7];
char systemname[7];
char portStr[5]; 
char machines[13];
struct sockaddr_in receiverAddr, senderAddr;

int extractPort(){
	int i;
	char ch;
	FILE* fp;
	if ((fp = fopen("systems", "rb")) != NULL)
  	{
  		 while (!feof(fp))
        	{
            		ch = fgetc(fp);
            		if (ch == ',' || ch == EOF) {
                		char extractedSystemName[7];
                		strncpy(extractedSystemName, machines, 6);
                		extractedSystemName[6] = '\0';
                		if(strcmp(extractedSystemName, systemname) == 0)
                		{
                			strncpy(portStr, machines+7, 4);
                			portStr[4] = '\0';
                			break;
               			}
               			
               			i=0;
            		}
            		else
            			machines[i++]=ch;
            	}
            	fclose(fp);
  	}
  	return atoi(portStr);
}

void makeConnection(){
	if((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
  	{
    		perror("socket system call failed");
    		exit(EXIT_FAILURE);
  	}

  	memset(&receiverAddr, 0, sizeof(receiverAddr));
  	memset(&senderAddr, 0, sizeof(senderAddr));

  	receiverAddr.sin_family = AF_INET;// IPv4
  	receiverAddr.sin_addr.s_addr = INADDR_ANY;//bind to any local address
  	receiverAddr.sin_port = htons(PORTLISTEN);
  	if(bind(sockfd, (const struct sockaddr *)&receiverAddr, sizeof(receiverAddr)) < 0)
  	{
    		perror("bind syscall failed");
    		exit(EXIT_FAILURE);
  	}
  	len = sizeof(senderAddr);
}

void sendMessage(char system[]){
	FILE* fp1;
	while(1)
  	{
  		n = recvfrom(sockfd, (char *)buffer, BUFLEN, MSG_WAITALL, (struct sockaddr *) &senderAddr, &len);
			
			buffer[n] = '\0';
			int recport=ntohs(senderAddr.sin_port);
		
		unsigned short networkOrderPort = htons(recport);
		char recfile[6]="EB";
		strncpy(systemname, system, 6);
			strcat(recfile,systemname);
			printf("New message received");

		if ((fp1 = fopen(recfile, "ab")) == NULL){
			printf("Error in opening %s file",recfile);
			return;
		}
		
		fwrite(buffer,1 ,strlen(buffer), fp1);
		fclose(fp1);
  	}
}

int main(int argc, char* argv[])
{
	if (argc < 2){
        	return 1;
    }
  	
	strncpy(systemname, argv[1], 6);
  	systemname[6] = '\0'; 
  	
	PORTLISTEN = extractPort();
	makeConnection();
	sendMessage(argv[1]);
  	close(sockfd);
  	return 0;
}


