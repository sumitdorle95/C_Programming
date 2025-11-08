#include<stdio.h>
void display(int iNo)
{
    int i =0;
    for (i=0;i<iNo;i++)
    {
        printf("*\t");
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