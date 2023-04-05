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
		sleep(30);
		printf("in Child process\n");	
	}
	else
	{
		printf("in Parent process\n");

	}
	return 0;
}
