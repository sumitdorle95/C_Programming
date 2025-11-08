#include<stdio.h>

float percentage(float fNo1,float fNo2)
{
    if(fNo2==0)
    {
       return 0;
    }
    else
    {
    float fProduct =0;
    fProduct =(fNo1/fNo2)*(100);
    return fProduct;
    }
}


int main()
{
    float fValue1=0,fValue2=0;
      float fRet=0;
    printf("enter the obtained numbers:");
    scanf("%f",&fValue1);
     printf("enter the total numbers:");
      scanf("%f",&fValue2);
  
    fRet= percentage(fValue1,fValue2);
    printf("%f is the percentage",fRet);

    return 0;

}


//time complexity:O(1)