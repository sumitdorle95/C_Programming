#include<stdio.h>

float AREA(float fNo)
{
    if(fNo<0)
    {
        fNo=-fNo;
    }
   
    float area =0;
    area= (3.14*fNo*fNo);
   
    return area;
}

int main()
{
    float radius=0,fRet=0;
    printf("enter the radius:");
    scanf("%f",&radius);
    fRet=AREA(radius);
    printf("%f  cm^2 is the area of circle",fRet);

    return 0;
}

//time complexity:O(1)