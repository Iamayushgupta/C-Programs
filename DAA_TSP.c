#include <stdio.h> 

int costmat[10][10], visited[10], n, cost=0; 

int TSP(int city) 

{ 

    int nearest=999, min=999, temp; 

    for(int i=0; i<n; i++) 

    { 

        if(costmat[city][i]!=0 && visited[i]==0) 

        { 

            if(costmat[city][i]<min) 

                min=costmat[i][0]+costmat[city][i]; 

            temp=costmat[city][i]; 

            nearest=i; 

        } 

    } 

    if(min!=999) 

        cost+=temp; 

    return nearest; 

} 

void mincost(int c) 

{ 

    int nearest; 

    visited[c]=1; 

    printf("%d ",c+1); 

    nearest=TSP(c); 

    if(nearest==999) 

    { 

        nearest=0; 

        printf("%d",nearest+1); 

        cost+=costmat[c][nearest]; 

        return; 

    } 

    mincost(nearest); 

} 

int main() 

{  

    printf("Enter total number of cities: "); 

    scanf("%d", &n); 

    printf("Enter cost matrix:\n"); 

    for(int i=0; i<n; i++) 

    { 

        for(int j=0; j<n; j++) 

            scanf("%d", &costmat[i][j]); 

        visited[i]=0; 

    } 

    printf("\nPath: "); 

    mincost(0); 

    printf("\nMinimum cost: "); 

    printf("%d",cost); 

    return 0; 

} 