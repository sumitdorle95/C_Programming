#include<stdio.h>

int oddfactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    int n =1;
    for (i=iNo;i>0;i--)
    {
        if((i%2)!=0)
        n=n*i;
        
    }
    return n;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    iRet=oddfactorial(iValue);
    printf("%d is odd the factorial of %d",iRet,iValue);

    return 0;
}

//time complexity:O(n)