#include<stdio.h>
void display(int iNo, int iFrequency)
{
    int i =0;
     if(iNo<0)
    {
        (iNo=-iNo);
    }
    for (i=0;i<iFrequency;i++)
    {
        printf("%d\t",iNo);
    }
}

int main ()
{
   int iValue = 0;
   int iCount =0;
   printf("enter the number:");
   scanf("%d",&iValue);
    printf("enter the count:");
    scanf("%d",&iCount);

   display(iValue,iCount);
   return 0;
}