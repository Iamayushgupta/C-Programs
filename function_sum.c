#include<stdio.h>
int sum(int a,int b);
int main(){
    int c=sum(2,5);
    printf("the value of sum is %d",c);
    return 0;
}
int sum(int a,int b){
    int result=a+b;
    return result; 
}
