#include <stdio.h>

void rangedisplayrev(int iNo1, int iNo2)
{
    int iCnt=0;
    if(iNo1>iNo2)
    {
        printf("invalid range");
    }
    else
    {

    for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
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
    rangedisplayrev(iValue1,iValue2);

    return 0;

}


//time complexity: O(n)