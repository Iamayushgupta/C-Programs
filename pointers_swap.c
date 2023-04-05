#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int main(){
    int x=3,y=4;
    printf("value of a and b before swap is %d %d\n",x,y);
    wrong_swap(x,y); // call by value
    printf("value of a and b after wrong swap is %d %d\n",x,y);
    swap(&x,&y);  // call by reference
    printf("value of a and b after swap is %d %d\n",x,y);


    return 0;
}
void wrong_swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}