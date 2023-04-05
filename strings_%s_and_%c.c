#include<stdio.h>
#include<string.h>
int main(){
    char st1[50];
    char st2[50];
    char c;
    int i=0;
    scanf("%s",&st1);
    while (c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0'; 
    //this makes the last character same as st1
    // else it would be '\n'

    printf("%s\n",st1);
    printf("%s\n",st2);
    printf("%d",strcmp(st1,st2));
    return 0;
    s
}