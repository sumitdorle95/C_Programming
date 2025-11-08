#include<stdio.h>

int multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1==0||iNo2==0||iNo3==0)
    {
       return 0;
    }
    else
    {
    int iProduct =0;
    iProduct =(iNo1*iNo2*iNo3);
    return iProduct;
    }
}


int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    printf("enter the three numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    int iRet=0;
    iRet= multiply(iValue1,iValue2,iValue3);
    printf("%d is the product of three numbers",iRet);

    return 0;

}


//time complexity:O(1)