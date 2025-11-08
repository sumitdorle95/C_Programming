#include<stdio.h>
#include<stdbool.h>

bool divisibilityby5(int iNo)
{
    if((iNo%5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main (void)
{
    int iValue=0;
    
    printf("enter the number:");
    scanf("%d",&iValue);
   
   printf("%s",divisibilityby5(iValue)?"yes":"no");

   return 0;
}

//time complexity : O(1)