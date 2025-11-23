#include<stdio.h>


void display(int iNo)
{
    int iCnt=0;
    char ch ='A';
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}



int main()
{
    int iValue=0;
    printf("enter the frequency:");
    scanf("%d",&iValue);
    display(iValue);


    return 0;
}