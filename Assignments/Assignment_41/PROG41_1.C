#include<stdio.h>



void display(int iNo)
{
   static int iCnt=-1;
    if(iCnt==-1)
   {
    iCnt=iNo;
   }
   

    while(iCnt>=1)
    {
        printf("%d\t*\t",iCnt);
        iCnt--;

        display(iNo);
    }
}


int main()
{

    int iValue =0;
    printf("enter number:");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
}