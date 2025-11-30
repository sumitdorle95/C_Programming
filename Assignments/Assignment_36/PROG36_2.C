#include<stdio.h>


void struprx(char *str)
{
    while(*str!=0)
    {
        if(*str>='a'&& *str<='z')
        {
            *str=*str-32;

        }
        

        str++;
    }
}

int main()
{
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    struprx(Arr);
    printf("%s",Arr);
    return 0;
}