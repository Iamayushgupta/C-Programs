#include<stdio.h>

int main(){
    int marks[4],n=1;
    for (int i=0;i<4;i++){
        marks[i]=n;
        n++;
    }
    for (int i=0;i<4;i++){
        printf("the marks of student %d : %d\n",i+1,marks[i]);
    }
    return 0;
}