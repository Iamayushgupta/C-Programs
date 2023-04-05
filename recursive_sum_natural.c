#include<stdio.h>
int sum_n(int x);

int main(){
    int n,sum;
    scanf("%d",&n);
    sum=sum_n(n);
    printf("%d is the sum of first %d natural numbers",sum,n);
    return 0;
}
int sum_n(int x){
    if (x==1){
        return 1;
    }
    else{
        return (x +sum_n(x-1));
    }
}