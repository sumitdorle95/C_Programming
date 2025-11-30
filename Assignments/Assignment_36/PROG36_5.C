#include<stdio.h>


void countspaces(char *str)
{
    int iCnt=0;
    while(*str!=0)
    {
        if(*str==' ')
        {
            iCnt++;
        }
       
        

        str++;
    }

    if(iCnt==0)
    {
         printf("no white space found.");
         
    }
    else
    {
         printf("no of white spaces is %d",iCnt);
    }
}

int main()
{
    
    char Arr[50]={};
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);
    countspaces(Arr);
   
   
    return 0;
}