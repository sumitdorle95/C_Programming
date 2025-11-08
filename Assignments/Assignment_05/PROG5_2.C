#include<stdio.h>

void FindMax(int iNo1, int iNo2)
{
    if (iNo1>iNo2)
    {
        printf("%d",iNo1);

    }
    else
    {
        printf("%d",iNo2);

    }
}

int main()
{
    int iValue1=0, iValue2=0;
    printf("enterr the number:");
    scanf("%d %d",&iValue1,&iValue2);
    FindMax(iValue1,iValue2);
}