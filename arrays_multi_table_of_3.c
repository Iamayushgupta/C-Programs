#include<stdio.h>

int main(){
    int a=2,b=7,c=9;
    int arr[3][10];
    for(int i=0;i<10;i++){
        arr[0][i]=a*(i+1);
    }
    for(int i=0;i<10;i++){
        arr[1][i]=b*(i+1);
    }
    for(int i=0;i<10;i++){
        arr[2][i]=c*(i+1);
    }
    for(int i=0;i<3;i++){ 
        for(int j=0;j<10;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}