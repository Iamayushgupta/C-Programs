#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int find_anagram(char array1[], char array2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;
 
    while (array1[i] != '\0')
    {
        num1[array1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (array2[i] != '\0')
    {
        num2[array2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
bool areIsomorphic(char *str1, char *str2)
{
    if (strlen(str1) != strlen(str2)) {
        return false;
    }
    int arr1[256] = { 0 }, arr2[256] = { 0 };
    for (int i = 0; i < strlen(str1); i++) 
	{
        if (arr1[(int)str1[i]]!= arr2[(int)str2[i]]) 
        {
            return false;
        }
        arr1[(int)str1[i]]++;
        arr2[(int)str2[i]]++;
    }
    return true;
}
int main()
{
	int pid;
	char str1[50],str2[50];
	printf("Input string 1\n");
	scanf("%s",str1);
	printf("Input string 2\n");
	scanf("%s",str2);
	printf("calling fork function\n");
	pid=fork();
	if(pid<0)
	{
		perror("fork");
		return 0;
	}
	if(pid==0)
	{
		printf("in Child process\n");
		if (areIsomorphic(str1, str2)==true)
        		printf("The strings are Isomorphic\n");
    		else
        		printf("The strings are not Isomorphic\n");
 

	}
	else
	{
		printf("in Parent process\n");
		if (find_anagram(str1,str2) == 1)
			printf("The strings are anagrams\n");
		else
			printf("The strings are not anagrams\n");

	}
}
