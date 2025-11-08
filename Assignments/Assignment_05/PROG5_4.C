#include<stdio.h>

void CheckType(int iNo)
{
    if (iNo>0)
    {
        printf("%d is a +ve integer",iNo);

    }
    else if (iNo<0)
    {
        printf("%d is a -ve integer",iNo);

    }
    else
    {
        printf("the number is 0 i.e neither -ve nor +ve");

    }
}

int main()
{
    int iNo =0;
    printf("enterr the number:");
    scanf("%d",&iNo);
    CheckType(iNo);
}