#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee harry={100,2500,"ayush"};
    printf("code is: %d\n",harry.code);
    printf("salary is: %f\n",harry.salary);
    printf("name is: %s\n",harry.name);

    return 0;
} 