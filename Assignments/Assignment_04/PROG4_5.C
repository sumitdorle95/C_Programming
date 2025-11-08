#include<stdio.h>



int DiffFact(int iNo)
{
    int i =0;
    int iEven =0;
    int iOdd =0;
    if(iNo<0)
    {
        (iNo=-iNo);
    }
    for(i=1;i<iNo;i++)
    {
        if((iNo%i)==0)
        {
           iEven= iEven+i; 
        }
        else
        {
            iOdd=iOdd+i;
        }
        
    }
    printf("%d",iEven-iOdd);
}

int main ()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
   iRet= DiffFact(iValue);
  
    return 0;
}