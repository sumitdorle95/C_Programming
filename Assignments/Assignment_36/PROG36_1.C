#include<stdio.h>


void strlwrx(char *str)
{
    while(*str!=0)
    {
        if(*str>='A'&& *str<='Z')
        {
            *str=*str+32;

        }
       

        str++;
    }
}

int main()
{
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    strlwrx(Arr);
    printf("%s",Arr);
    return 0;
}