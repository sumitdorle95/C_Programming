#include<stdio.h>

void sumdisplay(int iNo)
{
    int iCnt=0;
    int sum =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        sum=sum+iCnt;
    }
    printf("%d is the sum of first %d natural numbers",sum,iNo);
}


int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    sumdisplay(iValue);

    return 0;
}

//time complexity: O(n)