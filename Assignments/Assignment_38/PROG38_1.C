#include<stdio.h>


void strcpyrev(char *src, char *dest )
{
    char temp= *src;

    while(*src!='\0')
    {
        src++;
    }
    src--;
   
    while(*src>=temp)
    {
        *dest=*src;
        dest++;
        src--;
    }
    
}








int main()
{
    char Arr[50]={};
    char Brr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    strcpyrev(Arr,Brr);

    printf("modified string is %s",Brr);

    return 0;
}