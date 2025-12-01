#include<stdio.h>

void display(int iNo)
{
    static char cValue='A';
    static int iCnt =0;

    while(iCnt<=iNo)
    {
        printf("%c\t",cValue);
        iCnt++;
        cValue++;
        display(iNo);
    }
}


int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
}