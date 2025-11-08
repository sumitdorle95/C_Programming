#include<stdio.h>

int difffactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    int iEven =1;
    int iOdd =1;
    for (i=iNo;i>0;i--)
    {
        if((i%2)==0)
        {
            iEven=iEven*i;
        }
        else
        {
            iOdd=iOdd*i;
        }
        
    }
    return (iEven-iOdd);
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    iRet=difffactorial(iValue);
    printf("%d is difference b/w the even odd factorial of %d",iRet,iValue);

    return 0;
}

//time complexity:O(n)