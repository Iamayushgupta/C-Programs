#include<stdio.h> 

int main() 

{ 

    int m1[2][2], m2[2][2], output[2][2]; 

    printf("Enter elements of First matrix:\n"); 

    for (int i=0; i<2; i++) 

        for (int j=0; j<2; j++) 

            scanf("%d",&m1[i][j]); 

    printf("Enter elements of Second matrix:\n"); 

    for (int i=0; i<2; i++) 

        for (int j=0; j<2; j++) 

            scanf("%d",&m2[i][j]); 

    int p,q,r,s,t,u,v; 

    p=(m1[0][0]+m1[1][1])*(m2[0][0]+m2[1][1]); 

    q=(m1[1][0]+m1[1][1])*m2[0][0]; 

    r=m1[0][0]*(m2[0][1]-m2[1][1]); 

    s=m1[1][1]*(m2[1][0]-m2[0][0]); 

    t=(m1[0][0]+m1[0][1])*m2[1][1]; 

    u=(m1[1][0]-m1[0][0])*(m2[0][0]+m2[0][1]); 

    v=(m1[0][1]-m1[1][1])*(m2[1][0]+m2[1][1]); 

    output[0][0]=p+s-t+v; 

    output[0][1]=r+t; 

    output[1][0]=q+s; 

    output[1][1]=p-q+r+u; 

    printf("Matrix multiplication output:\n"); 

    for (int i=0; i<2; i++) 

    { 

        for (int j=0; j<2; j++) 

            printf("%d\t",output[i][j]); 

        printf("\n"); 

    } 

} 