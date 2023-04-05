#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp;

void show(struct employee emp1){
    printf("the value code of e1: %d\n",emp1.code);
    printf("the value salary of e1: %f\n",emp1.salary);
    printf("the value name of e1: %s\n",emp1.name);
}

int main(){
    // declaring e1 and ptr
    emp e1;
    emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    ptr->code=101;
    ptr->salary=105.65;
    strcpy(ptr->name,"Ayush");

    show(e1);

    return 0;
}