#include<stdio.h>

int multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1==0||iNo2==0||iNo3==0)
    {
       return 0;
    }
    else
    {
    int product =0;
    product =(iNo1*iNo2*iNo3);
    return product;
    }
}


int main()
{
    int i1=0,i2=0,i3=0;
    printf("enter the three numbers:");
    scanf("%d %d %d",&i1,&i2,&i3);
    int iRet=0;
    iRet= multiply(i1,i2,i3);
    printf("%d is the product of three numbers",iRet);

    return 0;

}


//time complexity:O(1)