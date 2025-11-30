#include<stdio.h>

int countsmall(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='a'&& *str<='z')
        {
            iCnt++;
        }
        str++;
         
    }

    return iCnt;
}



int main()
{
    int iRet=0;
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",&Arr);

    iRet=countsmall(Arr);
    printf("%d no of small letters",iRet);


    return 0;
}