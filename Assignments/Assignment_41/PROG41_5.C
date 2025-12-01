#include<stdio.h>



int multiply(int iNo)
{
   static int iNum=-1,iProduct=1;
   int iDigit=0;
   
   if(iNum==-1)
   {
    iNum=iNo;
   }
   

    while(iNum!=0)
    {
        iDigit=iNum%10;
        iProduct=iDigit*iProduct;
        iNum=iNum/10;

        multiply(iNo);
    }

    return iProduct;
}


int main()
{

    int iValue =0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=multiply(iValue);

    printf("product of digits is %d",iRet);

    return 0;
}