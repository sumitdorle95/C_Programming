#include<stdio.h>

int converter(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   
   int convert =0;
   convert = (iNo*1000);
   return convert;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter the distance:");
    scanf("%d",&iValue);
    iRet=converter(iValue);
    printf("%d  metres for %d km ",iRet,iValue);

    return 0;
}

//time complexity:O(1)