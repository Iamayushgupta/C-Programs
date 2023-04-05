#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
int main(int argc,char *argv[])
{
	//AKSHAY AGRAWAL 20BCE0783
	pid_t pid;
	pid=atoi(argv[2]);
	printf("Name of process to be killed = %s\n",argv[1]);
	printf("process ID = %d\n",pid); 
	kill(pid,SIGKILL);
	return 0;		
}
