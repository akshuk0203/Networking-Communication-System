#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
    	int pid, re;
    	char *otherprogram;
    	char *args[2]; 
    	otherprogram = "./ear";
    	args[0] = otherprogram;
    	args[1] = argv[1];
    	args[2] = NULL;
    	pid = fork();
    	if (pid >= 0) {
        	if (pid > 0) {
			otherprogram = "./mouth";
            		args[0] = otherprogram;
            		args[1] = argv[1];
    			args[2] = NULL;
            		pid = fork();
            		if (pid >= 0) {
                		if (pid > 0) {
                    			otherprogram = "./brain";
                    			args[0] = otherprogram;
                    			args[1] = argv[1];
    					args[2] = NULL;
                    			re = execv(otherprogram, (char **)args);
                            		if (re == -1) {
                                		perror("see the errno\n");
                            		}
                		} else {
                    			re = execv(otherprogram, (char **)args);
                    			if (re == -1) {
                    				perror("see the errno\n");
                    			}
                		}
            		} else {
                		perror("see the errno\n");
            		}
        	} else {
            		re = execv(otherprogram, (char **)args);
            		if (re == -1) {
                		perror("see the errno\n");
            		}
        	}
    } else {
        perror("see the errno\n");
    }

    return 0;
}

                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                    			
                   