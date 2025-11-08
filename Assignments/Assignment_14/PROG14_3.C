#include<stdio.h>


int count(int iNo)
{
    int idigit=0;
    int iFrequency =0;
    while(iNo!=0)
    {
        idigit=iNo%10;
        if(idigit==2)
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
    printf("it contains %d no of 2",iRet);

    return 0;
}