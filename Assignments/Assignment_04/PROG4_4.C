#include<stdio.h>



int SumFact(int iNo)
{
    int i =0;
    int iSum =0;
    if(iNo<0)
    {
        (iNo=-iNo);
    }
    for(i=1;i<=iNo;i++)
    {
        if((iNo%i)!=0)
        {
           iSum= iSum+i; 
        }
    }
    return iSum;
}

int main ()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
   iRet= SumFact(iValue);
   printf("%d",iRet);
    return 0;
}