#include<stdio.h>

int difffactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    int n =1;
    int t =1;
    for (i=iNo;i>0;i--)
    {
        if((i%2)==0)
        {
            n=n*i;
        }
        else
        {
            t=t*i;
        }
        
    }
    return n-t;
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