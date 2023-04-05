#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	
	printf("PID of os_new.c = %d\n", getpid());
	char *args[] = {"Hello", "C", "Programming", NULL};
	execv("./os_new", args);
	printf("Back to os_file.c");
	return 0;
}