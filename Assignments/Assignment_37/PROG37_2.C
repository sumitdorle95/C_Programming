#include<stdio.h>
#include<stdbool.h>


int checkch(char *str, char ch)
{
    int iCnt=0;
    while(*str!='\0')
    {
       if(*str==ch || *str==ch+32 || *str==ch-32)
        {
           iCnt++;
        }

        str++;
    }

    return iCnt;
}


int main()
{
    char Arr[50]={};
    char cValue='\0';
    int iRet=0;
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    printf("enter the character:");
    scanf(" %c",&cValue);
    iRet=checkch(Arr,cValue);

    printf("%c  occurs %d no of times",cValue,iRet);
    return 0;

}