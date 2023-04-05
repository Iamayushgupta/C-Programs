#include <stdio.h>
int main()
{
    int a[10], b[10], a1, b1, flags[10], all[10];
    int i, j;
 printf ("\n\t\t\tMemory Management Scheme -First Fit\n");
 for (i = 0; i < 10; i++)
 {
        flags[i] = 0;
        all[i] = -1;
 }
 printf ("Enter number of blocks: ");
 scanf ("%d", &a1);
 printf ("\nEnter the size of each" " block:\n ");
 for (i = 0; i < a1; i++)
 {
        printf("Block no.%d: ", i);
        scanf("%d", &a[i]);
 }
 printf ("\nEnter no. of " "processes: ");
 scanf ("%d", &b1);
 printf ("\nEnter size of each" " process:\n ");
 for (i = 0; i < b1; i++)
 {
        printf("Process no.%d: ", i);
        scanf("%d", &b[i]);
 }
 for (i = 0; i < b1; i++)
 for (j = 0; j < a1; j++)
 if (flags[j] == 0 && a[j] >= b[i])
{
        all[j] = i;
        flags[j] = 1;
        break;
}
 printf ("\nBlock no.\tsize\t\t" "process no.\t\tsize");
 for (i = 0; i < a1; i++)
 {
        printf("\n%d\t\t%d\t\t", i + 1, a[i]);
        if (flags[i] == 1)
        {
            printf("%d\t\t\t%d", all[i] + 1, b[all[i]]);
        }
        else
            printf("Not allocated");
 }
 printf ("\n");
}