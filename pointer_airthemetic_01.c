#include<stdio.h>

int main(){
    int i=1;
    int *ptr=&i;
    printf("the address of i is %d\n",ptr);
    ptr++; // addition/subtraction of int(ptr)/float(ptr) leads to an increment of 4
    printf("address after addition is %u\n",ptr);
    ptr++;
    printf("address after addition is %u\n",ptr);
    return 0;

    // for char(ptr) increment is +1
}