#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    printf("enter the value code of e1: ");
    scanf("%d",&e1.code);
    printf("enter the value salary of e1: ");
    scanf("%f",&e1.salary);
    printf("enter the value name of e1: ");
    scanf("%s",e1.name);

    return 0;
} 