#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],avg[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        int j=n-i;
        float temp=0.0;
        for(int k=i;k<j;k++){
            temp+=arr[k];
        }
        avg[i]=temp/(j-i);
    }
    float ans=100000.0;
    for(int i=1;i<n/2;i++){
        for(int j=i+1;j<n/2;j++){
            float temp=fabs(avg[i]-avg[j]);
            if (temp <ans){
                ans=temp;
            }
        }
    }
    printf("%d",ans);
    return 0;
}