#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
      if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
}

//time complexity: O(n)