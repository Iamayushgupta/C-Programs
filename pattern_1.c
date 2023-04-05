#include <stdio.h>
void pattern(int n);
// *
// ***
// *****
int main()
{
    int n = 3;
    pattern(n);
    return 0;
}
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
}