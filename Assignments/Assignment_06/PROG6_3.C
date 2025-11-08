#include<stdio.h>
#include<stdbool.h>

bool checker(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
    int iValue1=0,iValue2=0;
    bool bRet = false;
    printf("enter the number:");
    scanf("%d",&iValue1);
     printf("enter the number:");
     scanf("%d",&iValue2);
   bRet= checker(iValue1,iValue2);
    
    
    if(bRet==true)
    {
        printf("the number are equal");
    }
    else
    {
         printf("the numbers are not equal");

    }
    return 0;
}

//time complexity:O(1)