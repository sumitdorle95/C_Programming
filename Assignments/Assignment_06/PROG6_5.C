#include<stdio.h>

float percentage(float fNo1,float fNo2)
{
    if(fNo2==0)
    {
       return 0;
    }
    else
    {
    float product =0;
    product =(fNo1/fNo2)*(100);
    return product;
    }
}


int main()
{
    float f1=0,f2=0;
      float fRet=0;
    printf("enter the obtained numbers:");
    scanf("%f",&f1);
     printf("enter the total numbers:");
      scanf("%f",&f2);
  
    fRet= percentage(f1,f2);
    printf("%f is the percentage",fRet);

    return 0;

}


//time complexity:O(1)