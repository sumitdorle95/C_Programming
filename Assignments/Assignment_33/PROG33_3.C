#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if(ch>='0'&& ch<='9')
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
        printf("it is a digit.");

    }
    else
    {
         printf("it is not a  digit.");

    }

    return 0;
    
}


