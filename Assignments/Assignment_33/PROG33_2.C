#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch>='A'&& ch<='Z')
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
    bRet=CheckCapital(cValue);

    if(bRet==true)
    {
        printf("it is a CAPITAL LETTER.");

    }
    else
    {
         printf("it is not a  CAPITAL LETTER.");

    }

    return 0;
    
}


