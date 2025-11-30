#include<stdio.h>


void strcpytoggle(char *src, char *dest )
{
    char temp= *src;

    while(*src!='\0')
    {
        if(*src>='A'  &&  *src<='Z')
        {
            *src=*src+32;
            *dest=*src;
           

        }
        else if(*src>='a'  &&  *src<='z')
        {
            *src=*src-32;
            *dest=*src;
        }
        else
        {
            *dest=*src;
        }
        dest++;
        src++;
    }
    
   
    
    
}








int main()
{
    char Arr[50]={};
    char Brr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    strcpytoggle(Arr,Brr);

    printf("modified string is %s",Brr);

    return 0;
}