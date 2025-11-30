#include<stdio.h>

int LastOccurence(char *str, char ch)
{
    int iCnt=0,iLastindex=-1;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]==ch||str[iCnt]==ch+32 || str[iCnt]==ch-32 )
        {
            
            iLastindex=iCnt;
           
        }
       
        iCnt++;
    }

    
        return iLastindex;
    
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
    iRet=LastOccurence(Arr,cValue);
    if(iRet==-1)
    {
        printf("character not found");

    }
    else
    {
         printf("%c last  occured at %d index",cValue,iRet);
    }
   
    return 0;

}