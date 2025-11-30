#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("enter the character:");
    scanf("%c",&cValue);
    bRet=CheckDigit(cValue);

    if(bRet==true)
    {
        printf("it is a small letter.");

    }
    else
    {
         printf("it is not a  small letter.");

    }

    return 0;
    
}


