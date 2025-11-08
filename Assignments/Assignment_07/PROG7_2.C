#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int i =0;
    for (i=0;i<=iNo;i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}


//time complexity:O(n)