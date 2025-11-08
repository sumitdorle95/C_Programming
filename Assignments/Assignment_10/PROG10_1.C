#include<stdio.h>

float AREA(float fNo)
{
    if(fNo<0)
    {
        fNo=-fNo;
    }
   
    float fArea =0;
    fArea= (3.14*fNo*fNo);
   
    return fArea;
}

int main()
{
    float fRadius=0,fRet=0;
    printf("enter the radius:");
    scanf("%f",&fRadius);
    fRet=AREA(fRadius);
    printf("%f  cm^2 is the area of circle",fRet);

    return 0;
}

//time complexity:O(1)