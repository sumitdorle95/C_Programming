#include<stdio.h>

void evensumdisplay(int iNo)
{
    int iCnt=0;
    int sum =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        sum=sum+iCnt;
    }
    printf("%d is the sum of first %d even natural numbers",sum,iNo);
}


int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    evensumdisplay(iValue);

    return 0;
}

//time complexity: O(n)