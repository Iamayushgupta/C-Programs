#include<stdio.h>
#include<string.h>

int main(){
    char *st="ayush";
    int a=strlen(st);
    printf("%d",a);

    char source[]="ayush";
    char target[30];
    strcpy(target,source);
    printf("%s",target);

    char st1[50]="hello";
    char*st2="ayush";
    strcat(st1,st2);
    printf("%s",st1); 
    
    return 0;
}