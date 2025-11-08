#include<stdio.h>

void CheckLargest(int a,int b, int c)
{
    if (a>b,a>c)
    {
        printf("%d is the largest",a);

    }
    else if (b>a,b>c)
    {
        printf("%d is the largest",b);

    }
    else
    {
        printf("%d is the largest",c);

    }
}

int main()
{
    int iNo1 =0,iNo2=0,iNo3=0;
    printf("enterr the number:");
    scanf("%d %d %d",&iNo1,&iNo2,&iNo3);
    CheckLargest(iNo1 ,iNo2,iNo3);
}