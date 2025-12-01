#include<stdio.h>



void display(int iNo)
{
   static int iCnt=0;
   

    while(iCnt!=iNo)
    {
        printf("*\t");
        iCnt++;

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