#include<stdio.h>



void display()
{
   static char cValue='a';

    while(cValue<='f')
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