#include<stdio.h>
#include<stdbool.h>


bool checkch(char *str, char ch)
{
    while(*str!='\0')
    {
        if(*str==ch || *str==ch+32 || *str==ch-32)
        {
            return true;
        }

        str++;
    }

    return false;
}


int main()
{
    char Arr[50]={};
    char cValue='\0';
    bool bRet=false;
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    printf("enter the character:");
    scanf(" %c",&cValue);
    bRet=checkch(Arr,cValue);

    if(bRet==true)
    {
        printf("the character is present");
    }
    else
    {
        printf("the character is absent");
    }

    return 0;

}