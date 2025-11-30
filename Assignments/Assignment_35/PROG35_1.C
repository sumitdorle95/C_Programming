#include<stdio.h>

int countcapital(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
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

    iRet=countcapital(Arr);
    printf("%d no of capital letters",iRet);


    return 0;
}