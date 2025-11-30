#include<stdio.h>


void reverse(char *str)
{
    char *temp = str;
    while(*str!='\0')
    {
        str++;
    }
    str--;
    while(str>=temp)
    {
       printf("%c",*str);
       str--;
        
    }

   
}


int main()
{
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    reverse(Arr);
   
    return 0;
}