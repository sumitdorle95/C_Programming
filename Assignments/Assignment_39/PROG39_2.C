#include<stdio.h>



void display()
{
   static int iCnt=0;

    while(iCnt<=5)
    {
        printf("%d\t",iCnt);
        iCnt++;

        display();
    }
}


int main()
{
    display();

    return 0;
}