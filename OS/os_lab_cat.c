#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
// AYUSH GUPTA

int main(int argc, char* argv[])
{
    int fileDescriptor[2];
    if(pipe(fileDescriptor) == -1)
    {
        printf("An Error Occured While Opening a Pipe\n");
        return 1;
    }
    int ID = fork();
    if(ID == 0) // Child Writes
    {
        close(fileDescriptor[1]); // No Writing is done here
        char str[100];
        read(fileDescriptor[0], str, sizeof(char) * 100);
        close(fileDescriptor[0]);
        printf("From The Child Process, We Get: %s\n", str);
        int beginA = 0, beginB, endA, endB, ind = 0, i, j;
        int ok = 1;
        while(str[ind] != '\0')
        {
            if(str[ind] == ' ') endA = ind - 1, beginB = ind + 1;
            ind++;
        }
        endB = ind - 1;
        for(i = 0; i <= endB; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] = (char)((str[i] - 'A') + 'a');
        }
        for(i = beginA, j = beginB; i <= endA && j <= endB; i++, j++)
        {
            if(str[i] != str[j])
            {
                ok = 0;
                break;
            }
        }
        if(ok == 1) printf("\nThe Given String is a Tautonym");
        else printf("\nThe Given String is Not a Tautonym");
    }
    else // Read From Parent
    {
        close(fileDescriptor[0]); // We dont read anything here.
        char str[100];
        printf("Enter a Sentence for Tautonym Check: ");
        fgets(str, 100, stdin);
        write(fileDescriptor[1], str, sizeof(char) * 100);
        close(fileDescriptor[1]);
    }
    // read(), write() will return -1 so check for those.
    return 0;
}