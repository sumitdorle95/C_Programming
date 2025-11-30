#include<stdio.h>


void convertcase(char  ch)
{
    if(ch>='A' && ch<='Z')
     {
        ch=ch+32;

     }
     else if(ch>='a' && ch<='z')
     {
        ch=ch-32;
     }

     printf("%c",ch);
}



int main()
{
    char cValue='\0';
    printf("enter the character:");
    scanf("%c",&cValue);
    convertcase(cValue);


    return 0;
}