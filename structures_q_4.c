#include<stdio.h>

typedef struct date{
    int date,month,year;
}date;

void display(date d){
    printf("The date is: %d/%d/%d\n",d.date,d.month,d.year);
}

int dateCmp(date d1,date d2){
    if(d1.year>d2.year){
        return 1;
    }
    else if(d1.year<d2.year){
        return -1;
    }
    
}
int main(){
    date d1 = {2,11,21};
    date d2 = {5,4,22};

    return 0;
}