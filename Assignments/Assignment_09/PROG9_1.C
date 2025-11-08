#include<stdio.h>

void display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    int i =0;
    for (i=1;i<=iNo;i++)
    {
        printf("*\t");
        
    }
    for (i=1;i<=iNo;i++)
    {
        printf("#\t");
        
    }
}

int main()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
}

//time complexity:O(n)