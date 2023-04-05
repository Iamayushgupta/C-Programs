#include<stdio.h>
#include<string.h>

int main(){
    char arr[50];
    gets(arr);
    int i=0,count=1;
    for(i;i<strlen(arr);i++){
        if(arr[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}