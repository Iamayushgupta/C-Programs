#include <stdio.h>
int main()
{
    printf("\n\t\t\tMemory Management"
           " Scheme - Worst Fit");
    int i, j, nblocks, nfiles, temp, top = 0;
    int frag[10], blocks[10], files[10];
    static int block_arr[10], file_arr[10];
    printf("\nEnter the Total Number "
           "of Blocks: ");
    scanf("%d", &nblocks);
    printf("Enter the Total Number "
           "of Files: ");
    scanf("%d", &nfiles);
    printf("\nEnter the Size of the "
           "Blocks: \n");
    for (i = 0; i < nblocks; i++)
    {
        printf("Block No.%d:\t", i + 1);
        scanf("%d", &blocks[i]);
    }
    printf("Enter the Size of the "
           "Files:\n");
    for (i = 0; i < nfiles; i++)
    {
        printf("File No.%d:\t", i + 1);
        scanf("%d", &files[i]);
    }
    for (i = 0; i < nfiles; i++)
    {
        for (j = 0; j < nblocks; j++)
        {
            if (block_arr[j] != 1)
            {
                temp = blocks[j] - files[i];
                if (temp >= 0)
                {
                    if (top < temp)
                    {
                        file_arr[i] = j;
                        top = temp;
                    }
                }
            }
            frag[i] = top;
            block_arr[file_arr[i]] = 1;
            top = 0;
        }
    }
 printf ("\nFile Number\tFile Size\t Block Number\tBlock Size\tFragment");
 for (i = 0; i < nfiles; i++)
 {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, files[i],
               file_arr[i],
               blocks[file_arr[i]], frag[i]);
 }
 printf ("\n");
 return 0;
}
