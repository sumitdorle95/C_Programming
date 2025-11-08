#include<stdio.h>

void checkevenodd(int iNo)
{
    if ((iNo%2)==0)
    {
        printf("it is an even number");

    }
    else
    {
        printf("it is an odd number");

    }
}

int main()
{
    int iValue=0;
    printf("enterr the number:");
    scanf("%d",&iValue);
    checkevenodd(iValue);
}