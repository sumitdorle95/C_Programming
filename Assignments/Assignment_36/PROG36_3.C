#include<stdio.h>


void togglex(char *str)
{
    while(*str!=0)
    {
        if(*str>='A'&& *str<='Z')
        {
            *str=*str+32;

        }
        else if(*str>='a'&& *str<='z')
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
    togglex(Arr);
    printf("%s",Arr);
    return 0;
}