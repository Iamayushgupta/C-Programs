#include<stdio.h>

int main(){
    int a=3;
    printf("%d %d %d",a++,a++,++a);
    return 0;
}
 
// '++a' operator returns after evaluating whole thing
// it goes from right to left
// 'a++' prints first then evaluates