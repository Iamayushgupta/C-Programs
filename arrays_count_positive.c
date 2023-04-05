#include <stdio.h>
int count_pos(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count = count + 1;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, -1};
    int pos = count_pos(arr, 6);
    printf("%d", pos);
    return 0;
}
