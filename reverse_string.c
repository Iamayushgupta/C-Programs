#include<stdio.h>
#include<string.h>

int main(){
    char arr[50],rev[50];
    int i=0;
    gets(arr);
    int x=strlen(arr);
    for(x;x>=0;x--){
        rev[i]=arr[x-1];
        i++;
    }
    rev[i]='\0';
    printf("%s",rev);
    return 0;
}