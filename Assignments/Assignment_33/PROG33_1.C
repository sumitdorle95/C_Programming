#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if(ch>='A'&& ch<='Z')
    {
        return true;
    }
    else if(ch>='a'&& ch<='z')
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
    bRet=CheckAlpha(cValue);

    if(bRet==true)
    {
        printf("it is a character.");

    }
    else
    {
         printf("it is not a character.");

    }

    return 0;
    
}


