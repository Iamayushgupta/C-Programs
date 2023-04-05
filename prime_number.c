#include <stdio.h>

int main()
{

    int n, bool = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            printf("%d is not a prime number", n);
            bool = 1;
            break;
        }
    }
    if (bool == 0)
    {
        printf("%d is a prime number", n);

    }
    
    return 0;
}