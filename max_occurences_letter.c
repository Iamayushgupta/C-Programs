#include <stdio.h>
void main()
{
    char str[100];
	int ch_fre[200];
    int i = 0, max;
    int ascii;
	gets(str);

    for(i=0; i<100; i++)
    {
        ch_fre[i] = 0;
    }

    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        ch_fre[ascii] += 1;
        i++;
    }

    max = 0;
    for(i=0; i<100; i++)
    {
        if(i!=32)
        {
        if(ch_fre[i] > ch_fre[max])
            max = i;
        }
    }	
    printf("%c : %d ", max, ch_fre[max]);
}
