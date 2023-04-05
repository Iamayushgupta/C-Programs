#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();;
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("good morning ayush\n");
    goodafternoon();
    goodnight();
}
void goodafternoon(){
    printf("good afternoon ayush\n");
}
void goodnight(){
    printf("good night ayush\n");
}