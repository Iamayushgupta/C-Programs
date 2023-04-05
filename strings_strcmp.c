#include<stdio.h>
#include<string.h>

int main(){
    char st1[50]="far";
    char*st2="joke";
    int val=strcmp(st1,st2);
    printf("%d",val);

    // if strings are same, it returns 0
    // if diff of first mismatching character is >0 then it gives positive 
    // and vice versa
    return 0;
}