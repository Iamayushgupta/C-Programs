#include<stdio.h>

int main(){

    int i=0;

    while (i<10){
        i++;
        if (i!=5)
            continue;
        else
            printf("%d",i);
    }
    return 0;
}