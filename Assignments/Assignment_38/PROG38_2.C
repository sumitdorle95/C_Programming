#include<stdio.h>


void strcpyX(char *src, char *dest )
{
    char temp= *src;

    while(*src!='\0')
    {
        if(*src!=' ')
        {
            *dest=*src;
             dest++;

        }
        src++;
    }
    
   
    
    
}








int main()
{
    char Arr[50]={};
    char Brr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    strcpyX(Arr,Brr);

    printf("modified string is %s",Brr);

    return 0;
}