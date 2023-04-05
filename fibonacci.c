#include<stdio.h>
// to print first n elements of fibonacci series

int main(){
    int a=0,b=1,nth=0,n,count=0;
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    while(count<n-2){
        nth=a+b;
        printf("%d\n",nth);
        a=b;
        b=nth;
        count++;
    }
    return 0;
}