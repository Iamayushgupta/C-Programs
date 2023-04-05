#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
char words[40][40000][40];
int num[30], cnt = 0;
void *palinfun(void *argm)
{
    int *m = (int *)argm;
    int h = *m;
    int p, q, r, s, t, x;
    char revs[30];
    cnt = 0;
    for (p = 0; p < num[h]; p++)
    {
        q = strlen(words[h][p]);
        r = q - 1;
        for (t = 0; t < q; t++)
        {
            revs[t] = words[h][p][r];
            r--;
        }
        revs[t] = '\0';
        if (strcmp(revs, words[h][p]) == 0)
            cnt++;
        else
        {
            s = (int)revs[0];
            s = s - 65;
            for (x = 0; x < num[s]; x++)
            {
                if (strcmp(revs, words[p][x]) == 0)
                    cnt++;
            }
        }
    }
    return (void *)&cnt;
}
int main()
    {
        void *retv;
        int pal_no = 0;
        pthread_t thrd[26];
        char start, r;
        FILE *fil;
        fil=fopen("os_words.txt", "r");
        int i = 0, j = 0, k = 0;
        start = 'A';
        while ((r = getc(fil))!= EOF)
        {
            if (r != '\n')
            {
                if (i == 0)
                {
                    if (r != start)
                    {
                        num[k] = j;
                        k++;
                        start = r;
                        j = 0;
                    }
                    else{
                        j++;
                        }
                }
                words[k][j][i]=r;
                i++;
            }
            else{
                i=0;
                }
        }
                
    fclose(fil);
    num[k] = j;
    for (i = 0; i <= k; i++)
        {
        if (pthread_create(&thrd[i],NULL, palinfun,(void *) & i) < 0)
            { 
                printf("\n Error in creating thread %d\n",i); 
                exit(1); 
            }
            pthread_join(thrd[i],&retv); 
            pal_no+=*(int *)retv; 
            printf("%c %d \t ",words[i][1][0],*(int *)retv);
        }
    printf("number of palindromic words are %d\n",pal_no);
    }