#include<stdio.h>

void OddDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    for (i=1;i<iNo;i++)
    {
        if((i%2)!=0)
        printf("%d\t",i);
    }
}

int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    OddDisplay(iValue);

    return 0;
}

//time complexity:O(n)