#include<stdio.h>

typedef struct vector
{
    int x,y;
}vector;

vector sumVector(vector v1,vector v2){
    struct vector result;
    result.x=v1.x + v2.x;
    result.y=v2.y + v1.y;
    return result;
}
int main(){
    vector v1,v2,sum;
    v1.x=20;
    v1.y=30;
    printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
    v2.x=10;
    v2.y=40;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
    sum=sumVector(v1,v2);
    printf("the sum x is %d and sum y is %d",sum.x,sum.y);
    return 0;
}