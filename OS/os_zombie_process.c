#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	//AYUSH GUPTA 20BKT0087
	int pid;
	pid=fork();
	if(pid<0)
	{
		perror("fork");
		return 0;
	}
	if(pid==0)
	{
		
		printf("in Child process");
		exit(0);	
	}
	else
	{
		printf("in Parent process");
		sleep(50);

	}
	return 0;
}