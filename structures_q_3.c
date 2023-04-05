#include<stdio.h>

typedef struct complex{
    int real,complex;
}comp;

void display(comp c){
    printf("Value of real part is %d\n",c.real);
    printf("Value of complex past is %d\n",c.complex);
}
int main(){
    comp cnums[5];
    for(int i=0;i<5;i++){
        printf("Enter real part of %d\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter complex part of %d\n",i+1);
        scanf("%d",&cnums[i].complex);
    }
    for(int i=0;i<5;i++){
        display(cnums[i]);
    }
    return 0;
}