#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main(int argc, char* argv[]){
	char systemname[7];
	int i,data;
	int sockfd;
	char umsg[1024];
 	char remotePort[4];
  	FILE* fp;
  	int REMOTEPORT;
  	char sendfile[6]="BM";
  	strncpy(systemname, argv[1], 6);	
  	strcat(sendfile,systemname);
    	while (1) { 
  	if ((fp = fopen(sendfile, "rb")) != NULL)
  	{
  		sleep(2);
  		fread(&remotePort, 1, 4, fp);
  		REMOTEPORT = atoi(remotePort);
  		
  		fseek(fp, 1, SEEK_CUR);
  		size_t bytesRead = fread(&umsg, 1, sizeof(umsg) - 1, fp);
		umsg[bytesRead] = '\0'; 
  	
  		fclose(fp);
  		
  		struct sockaddr_in   receiverAddr;
  		if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
  		{
    			perror("socket failed");
    			exit(EXIT_FAILURE);
  		}

		memset(&receiverAddr, 0, sizeof(receiverAddr));
  		receiverAddr.sin_family = AF_INET;// ipv4
  		receiverAddr.sin_port = htons(REMOTEPORT);// host to network
  		receiverAddr.sin_addr.s_addr = INADDR_ANY;// 32bit/64bit
 		if (sendto(sockfd, umsg, strlen(umsg), 0, (const struct sockaddr *)&receiverAddr, sizeof(receiverAddr)) < 0) {
                	perror("sendto failed");
            	} 
  		sleep(2);
  		remove(sendfile);
  		
            }
            
            
  	}
  	
  	close(sockfd);
	
  	return 0;
}
