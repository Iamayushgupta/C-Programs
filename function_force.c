#include<stdio.h>
float force(float m);

int main(){
    float mass;
    scanf("%f",&mass);
    printf("the value of gravity force is %.2f",force(mass));
    return 0;
}
float force(float m){
    float result=m*9.8;
    return result;
}



