#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	// AYUSH GUPTA 20BKT0087
	printf("Main function is starting to execute\n");
	printf("Main function is about to call system()\n\n");
	system("./os_ayush");
	printf("\nReturns to Main function\n");
	printf("Main function is about to terminate\n");	
	return 0;
}