#include<stdio.h>

int converter(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
   int iConvert =0;
   iConvert = (iNo*70);
   return iConvert;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter the number of usd:");
    scanf("%d",&iValue);
    iRet=converter(iValue);
    printf("%d  inr for %d usd ",iRet,iValue);

    return 0;
}

//time complexity:O(1)