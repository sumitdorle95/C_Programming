#include<stdio.h>


int count(int iNo)
{
    int idigit=0;
    int iFrequency =0;
    while(iNo!=0)
    {
        idigit=iNo%10;
        if(idigit<6)
        {
            iFrequency++;
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
    iRet=count(iValue);
    printf("it contains %d no of digits smaller than 6",iRet);

    return 0;
}