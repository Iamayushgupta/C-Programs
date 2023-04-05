#include<stdio.h>

int main(){
    int i =34;
    int *j=&i;
    // value of j is equal to address of i
    // address of  j is given by &j
    // address of  i is given by &i .. which is equal to value of j
    // value of i is given by *j
    // *(&j) gives value of j where &j is the address of j
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",j);
    printf("the address of j is %u\n",&j);
    printf("the value of j is %u\n",*(&j));
    return 0;
}
