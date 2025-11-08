#include<stdio.h>

void multiple(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    for (i=10;i>0;i--)
    {
        printf("%d\t",i*iNo);
    }
}

int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    multiple(iValue);

    return 0;
}

//time complexity:O(1)