#include<stdio.h>


void digitsdisplay(char *str)
{
    int iCnt=0;
    while(*str!=0)
    {
        if(*str>='0'&& *str<='9')
        {
            printf("%c",*str);
            iCnt++;
        }
       
        

        str++;
    }

    if(iCnt==0)
    {
         printf("no digits found.");
    }
}

int main()
{
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    digitsdisplay(Arr);
   
    return 0;
}