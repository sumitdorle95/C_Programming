#include<stdio.h>


int multiply(int iNo)
{
    int idigit=0;
    int iFrequency =1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        idigit=iNo%10;
       
        {
            iFrequency=iFrequency*idigit;
        }
        iNo=iNo/10;

    }

    return iFrequency;
}


int main()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    iRet=multiply(iValue);
    printf("multiplication is  %d",iRet);

    return 0;
}