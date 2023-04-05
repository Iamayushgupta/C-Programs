#include<stdio.h>

int main(){
    char ch;
    printf("enter your character\n");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97){
        printf("it is lowercase\n");
    }
    else{
        printf("it is not lowercase\n");
    }
    return 0;

}