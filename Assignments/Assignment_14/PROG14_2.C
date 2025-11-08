#include<stdio.h>
#include<stdbool.h>

bool checkzero(int iNo)
{
    int idigit =0;
    if(iNo==0)
    {
        printf("it contains zero");
        return 0;
    }

    while(iNo!=0)
    {
        idigit = iNo%10;
        if(idigit==0)
        {
            return true;
        }
        iNo =iNo/10;
    }
    return false;
}


int main(void)
{
    int iValue=0;
    bool bRet=false;
    printf("enter the number:");
    scanf("%d",&iValue);
    checkzero(iValue);
    
    {
        if(iValue!=0)
         printf("%s\n",checkzero(iValue)?"it contains zero":"it doesnt contain zero");
    }
   
    return 0;
}