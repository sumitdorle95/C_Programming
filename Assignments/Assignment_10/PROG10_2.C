#include<stdio.h>

double AREA(double dNo1, double dNo2)
{
    if(dNo1<0||dNo2<0)
    {
        dNo1=-dNo1;
        dNo2=-dNo2;
    }
   
    double area =0;
    area= (dNo1*dNo2);
   
    return area;
}

int main()
{
    double l=0,b=0,iRet=0;
    printf("enter the length & breadth:");
    scanf("%lf %lf",&l,&b);
    iRet=AREA(l,b);
    printf("%lf  cm^2 is the area of rectangle",iRet);

    return 0;
}

//time complexity:O(1)