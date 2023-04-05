#include<stdio.h>

int main(){
    char str[50];
    gets(str);
    int len=0,i=0;
    while (str[i]!='\0'){
        len++;
        i++;
    }
    printf("%d\n",len);
    return 0;
}