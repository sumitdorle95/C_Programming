#include<stdio.h>

double converter(double dNo)
{
    if(dNo<0)
    {
        dNo=-dNo;
    }
   
   double convert =0;
   convert = (dNo*0.0929);
   return convert;
}

int main()
{
    double dValue=0,dRet=0;
    printf("enter the square feet:");
    scanf("%lf",&dValue);
    dRet=converter(dValue);
    printf("%lf  square meter for %lf square feet ",dRet,dValue);

    return 0;
}

//time complexity:O(1)