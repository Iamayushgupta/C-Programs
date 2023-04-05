#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    pid_t pid;
    int pipedesc[2];
    pid = fork();
    if (pid < 0)
    {
        perror("fork");
        return 0;
    }
    if (pipe(pipedesc) < 0)
    {
        perror("pipe");
        return 0;
    }
    if (pid > 0)
    {
        //parent process
        close(1);
        dup(pipedesc[1]);
        close(pipedesc[0]);
        close(pipedesc[1]);
        execlp("/bin/ls", "ls", "-l", NULL);
    }
    else
    {
        // child process
        close(0);
        dup(pipedesc[0]);
        close(pipedesc[0]);
        execlp("/bin/grep", "grep", ".c$", NULL);
    }
    return 0;
}