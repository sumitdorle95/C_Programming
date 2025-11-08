#include<stdio.h>


int sumdiff(int iNo)
{
    int idigit=0;
    int even =0;
    int odd =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        idigit=iNo%10;
        if((idigit%2)==0)
        {
            even=even+idigit;
        }
        else
        {
            odd=odd+idigit;
        }
        iNo=iNo/10;

    }

    return (even-odd);
}


int main()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    iRet=sumdiff(iValue);
    printf("difference is  %d",iRet);

    return 0;
}