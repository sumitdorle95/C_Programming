#include<stdio.h>

void evendisplay(int iNo)
{
    int iCnt=0;
      if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    evendisplay(iValue);

    return 0;
}
//time complexity: O(n)