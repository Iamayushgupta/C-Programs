#include<stdio.h>

int main(){
    char str[50];
    gets(str);
    int i=0,alp=0,splch=0,digit=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }
    printf("%d alphabets \n %d digits \n %d special characters ",alp,digit,splch);
    return 0;
}