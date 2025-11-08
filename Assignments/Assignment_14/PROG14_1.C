#include<stdio.h>

void displaydigit(int iNo)
{
    int idigit =0;
    printf("%d is the original value\n",iNo);


    while(iNo!=0)
    {
        printf("-------------------------------\n");
        idigit=iNo%10;
        printf("idigit is:%d\n",idigit);
        iNo=iNo/10;
        printf("iNo is:%d\n",iNo);
        printf("-------------------------------\n");

    }
}



int main ()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    displaydigit(iValue);

    return 0;
}

//time complexity: