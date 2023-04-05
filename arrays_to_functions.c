#include<stdio.h>
void printarray(int *ptr,int n){
    for (int i=0;i<n;i++){
        printf("the value of %d ele is %d\n",i+1,*(ptr+i));
    }
}
void printarr(int ptr[],int n){
    for (int i=0;i<n;i++){
        printf("the value of %d ele is %d\n",i+1,ptr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printarray(arr,7);
    printarr(arr,7);
    return 0;
}