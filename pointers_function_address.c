#include<stdio.h>
void address(int a){
    printf("the address of variable is %u\n",&a);
}
int main(){
    int i=4;
    printf("the value of variable i is %d\n",i);
    address(i);
    printf("the address of variable i is %u\n",&i);
    return 0;
}

// function call and '&d' returns different address
