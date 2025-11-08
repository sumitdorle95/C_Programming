#include<stdio.h>

int factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    int iFactorial =1;
    for (i=iNo;i>0;i--)
    {
        iFactorial=iFactorial*i;
        
    }
    return iFactorial;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    iRet=factorial(iValue);
    printf("%d is the factorial of %d",iRet,iValue);

    return 0;
}

//time complexity:O(n)