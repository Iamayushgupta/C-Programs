#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
void *ft1()
{
    FILE *f1, *f2;
    f1 = fopen("os_2_file1.txt", "r");
    f2 = fopen("os_2_file2.txt", "w");
    if (f1 == NULL)
    {
        printf("\nError in opening file");
        return NULL;
    }
    char c;
    while ((c = fgetc(f1)) != EOF)
    {
        fputc(c, f2);
    }
    printf("\nSuccessfully copied\n");
    fclose(f1);
    fclose(f2);
}
void *ft2()
{
    char inputString[100], outputArray[100];
    int readIndex = 0, writeIndex;
    printf("Enter a String \n");
    gets(inputString);
    while (inputString[readIndex] == ' ')
    {
        readIndex++;
    }
    for (writeIndex = 0; inputString[readIndex] != '\0'; readIndex++)
    {
        if (inputString[readIndex] == ' ' && inputString[readIndex - 1] == ' ')
        {
            continue;
        }
        outputArray[writeIndex] = inputString[readIndex];
        writeIndex++;
    }
    outputArray[writeIndex] = "";
    printf("String without extra spaces\n%s\n", outputArray);
}
int main()
{
    pthread_t thid1, thid2;
    if (pthread_create(&thid1, NULL, ft1, NULL) < 0)
    {
        perror("Error in creating 1st thread");
        exit(-1);
    }
    pthread_join(thid1, NULL);
    if (pthread_create(&thid2, NULL, ft2, NULL) < 0)
    {
        perror("Error in creating 2nd thread");
        exit(-1);
    }
    pthread_join(thid2, NULL);
    printf("File-1 Heya");
    printf("\nMain thread finished\n");
    return 0;
}