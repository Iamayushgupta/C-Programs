#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    float avg;
    avg = average(x, y, z);
    printf("average of three number is %f", avg);
    return 0;
}
float average(int a, int b, int c)
{
    return (float)(a + b + c) / 3;
}