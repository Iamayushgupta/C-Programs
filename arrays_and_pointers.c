#include<stdio.h>

int main(){
    int marks[4];
    int *ptr=marks; // or int *ptr=marks[0]
    for(int i=0;i<4;i++){
        printf("enter the value of marks for %d student\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++){
        printf("the marks of %d student is: %d\n",i+1,marks[i]);
    
    }
    return 0;
}