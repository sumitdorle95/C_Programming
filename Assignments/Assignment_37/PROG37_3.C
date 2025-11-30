#include<stdio.h>

int FirstOccurence(char *str, char ch)
{
    int iCnt=0,iCount=0;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]==ch||str[iCnt]==ch+32 || str[iCnt]==ch-32 )
        {
            
            return iCnt;
           
        }
       
        iCnt++;
    }

    
        return -1;
    
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
    iRet=FirstOccurence(Arr,cValue);
    if(iRet==-1)
    {
        printf("character not found");

    }
    else
    {
         printf("%c first  occured at %d index",cValue,iRet);
    }
   
    return 0;

}