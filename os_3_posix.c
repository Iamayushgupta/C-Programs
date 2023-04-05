#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
void *addr;
char msg[100], x[100];
int shmFD;
void *thrd_rd(void *vargp)
{
    memcpy(msg, addr, sizeof(msg));
    printf("Message read from shared memory: %s\n", msg);
    return NULL;
}
void *thrd_wr(void *vargp)
{
    shmFD = shm_open("Shm1", O_RDWR | O_CREAT, 0666);
    if (shmFD == -1)
    {
        perror("shm_open");
        exit(-1);
    }
    if (ftruncate(shmFD, 512) == -1)
    {
        perror("ftruncate");
        exit(-1);
    }
    addr = mmap(NULL, 512, PROT_WRITE | PROT_READ, MAP_SHARED, shmFD, 0);
    if (addr == MAP_FAILED)
    {
        perror("mmap");
        exit(-1);
    }
    printf("Enter: ");
    scanf("%s", x);
    strcpy(msg, x);
    memcpy(addr, msg, strlen(msg) + 1);
    printf("Process has written .... %s ... to the shared memory\n", msg);
    pthread_create(&tid2,NULL,thrd_rd,NULL);
        pthread_join(tid2,NULL);
    for (int i = 4; i <= 9; i++)
        msg[i] = '-';

    memcpy(addr, msg, strlen(msg) + 1);
    printf("Updated message written to shared memory: %s\n", addr);
    return NULL;
}
int main()
{
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, thrd_wr, NULL);
    pthread_join(tid1, NULL);
    pthread_create(&tid2, NULL, thrd_rd, NULL);
    pthread_join(tid2, NULL);
    printf("\n");
    exit(0);
}