#include<stdio.h>



void display()
{
   static char cValue='A';

    while(cValue<='F')
    {
        printf("%c\t",cValue);
        cValue++;

        display();
    }
}


int main()
{
    display();

    return 0;
}