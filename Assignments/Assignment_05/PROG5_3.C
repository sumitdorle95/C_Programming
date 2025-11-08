#include<stdio.h>

void CheckLeap(int iNo)
{
    if ((iNo%4)==0)
    {
        printf("%d is a leap year",iNo);

    }
    else
    {
        printf("%d is not a leap year",iNo);

    }
}

int main()
{
    int year =0;
    printf("enterr the year:");
    scanf("%d",&year);
    CheckLeap(year);
}