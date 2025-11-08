#include<stdio.h>
void display(int iNo)
{
    if (iNo<10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");

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