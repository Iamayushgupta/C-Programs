#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp){
    printf("the value code of e1: %d\n",emp.code);
    printf("the value salary of e1: %f\n",emp.salary);
    printf("the value name of e1: %s\n",emp.name);
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code=101;
    ptr->salary=105.65;
    strcpy(ptr->name,"Ayush");
    show(e1);
    return 0;
}