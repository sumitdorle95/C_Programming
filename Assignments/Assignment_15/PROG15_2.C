#include<stdio.h>


int countODD(int iNo)
{
    int idigit=0;
    int iFrequency =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        idigit=iNo%10;
        if((idigit%2)!=0)
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
    iRet=countODD(iValue);
    printf("it contains %d no of ODD digits ",iRet);

    return 0;
}