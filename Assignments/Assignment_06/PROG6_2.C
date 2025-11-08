#include<stdio.h>
#include<stdbool.h>

bool checker(int iNo)
{
    if(iNo>100)
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
    int iValue=0;
    bool bRet = false;
    printf("enter the number:");
    scanf("%d",&iValue);
   bRet= checker(iValue);
    
    
    if(bRet==true)
    {
        printf("%d is greater than 100",iValue);
    }
    else
    {
         printf("100 is greater than %d",iValue);

    }
    return 0;
}


//time complexity:O(1)