#include<stdio.h>
#include<stdbool.h>


void display(char ch)
{
    int ascii= (int)ch;

    printf("decimal:%d\n",ascii);
    printf("octal:%o\n",ascii);
    printf("hexadecimal:0X%X\n",ascii);
   
     

}



int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("enter the character:");
    scanf("%c",&cValue);
    display(cValue);


    return 0;
}