#include <stdio.h>

void rangedisplay(int iNo1, int iNo2)
{
    int iCnt=0;
    if(iNo1>iNo2)
    {
        printf("invalid range");
    }
    else
    {

    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    }
}

int main ()
{
    int iValue1=0,iValue2=0;
    printf("enter the range:");
    scanf("%d  %d",&iValue1,&iValue2);
    rangedisplay(iValue1,iValue2);

    return 0;

}


//time complexity: O(n)