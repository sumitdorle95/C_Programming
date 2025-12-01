#include<stdio.h>



void display()
{
   static int iCnt=5;

    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;

        display();
    }
}


int main()
{
    display();

    return 0;
}