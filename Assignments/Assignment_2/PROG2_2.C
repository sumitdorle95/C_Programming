#include<stdio.h>
void display(int iNo)
{
    int iCnt =0;
    if(iNo<0)
    {
        (iNo=-iNo);
    }
    while (iNo>iCnt)
    {
        printf("*\t");
        iNo--;
    }
}

int main ()
{
   int iValue = 0;
   printf("enter the number:");
   scanf("%d",&iValue);
   display(iValue);
   return 0;
}