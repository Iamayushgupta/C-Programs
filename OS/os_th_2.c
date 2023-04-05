#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int fileDescriptor = open("set", O_WRONLY); 
    if(fileDescriptor == -1)
    {
        return 1;
    }

    for(i = 0; i < 5; i++)
    {
        if(write(fileDescriptor, &arr[i], sizeof(int)) == -1) 
        {
            return 2;
        }
        printf("Wrote: %d\n",fstat(fetchVal));
    }
    close(fileDescriptor);

    // recieve the sum
    fileDescriptor = open("set", O_RDONLY);
    if(fileDescriptor == -1)
    {
        return 1;
    }
    int recievedSum;
    if(read(fileDescriptor, &recievedSum, sizeof(int)) == -1)
    {
        return 2;
    }
    close(fileDescriptor);
    return 0;
}