#include<stdio.h>

int main(){
    //char str[]={'a','y','u','s','h','\0'};
    char str[]="ayush";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}