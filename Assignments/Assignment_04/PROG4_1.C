#include<stdio.h>



int MultiFact(int iNo)
{
    int i =0;
    int n =1;
    if(iNo<0)
    {
        (iNo=-iNo);
    }
    for(i=1;i<iNo;i++)
    {
        if((iNo%i)==0)
        {
           n= n*i; 
        }
    }
    return n;
}

int main ()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
   iRet= MultiFact(iValue);
   printf("%d",iRet);
    return 0;
}