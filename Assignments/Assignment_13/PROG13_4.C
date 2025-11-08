#include<stdio.h>

void sumdisplay(int iNo)
{
    int iCnt=0;
    int iSum =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    printf("%d is the sum of first %d natural numbers",iSum,iNo);
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