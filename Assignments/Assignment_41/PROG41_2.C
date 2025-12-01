#include<stdio.h>



int sum(int iNo)
{
   static int iNum=-1,iSum=0;
   int iDigit=0;
   
   if(iNum==-1)
   {
    iNum=iNo;
   }
   

    while(iNum!=0)
    {
        iDigit=iNum%10;
        iSum=iDigit+iSum;
        iNum=iNum/10;

        sum(iNo);
    }

    return iSum;
}


int main()
{

    int iValue =0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=sum(iValue);

    printf("sum of digits is %d",iRet);

    return 0;
}