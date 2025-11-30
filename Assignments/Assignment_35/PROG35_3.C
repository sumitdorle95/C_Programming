#include<stdio.h>

int difference(char *str)
{
    int iCnt=0,iSnt=0;
    while(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
            iCnt++;
        }
        else if(*str>='a'&& *str<='z')
        {
            iSnt++;
        }
        str++;
         
    }

    return (iSnt-iCnt);
}



int main()
{
    int iRet=0;
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",&Arr);

    iRet=difference(Arr);
    printf("%d is the difference b/w small & capital letters",iRet);


    return 0;
}