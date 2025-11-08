#include<stdio.h>
#include<stdbool.h>
bool check(int iNo)
{
    
     if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
   int iValue = 0;
   bool  bRet =false;
   printf("enter the number:");
   scanf("%d",&iValue);
    
    bRet=check(iValue);

    if (bRet==true)
    {
        printf("%d is an even number",iValue);

    }
    else
    {
        printf("%d is an odd number",iValue);
    }
   return 0;
}