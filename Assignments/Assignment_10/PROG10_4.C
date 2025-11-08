#include<stdio.h>

double converter(double dNo)
{
    if(dNo<0)
    {
        dNo=-dNo;
    }
   
   double convert =0;
   convert = ((dNo-32)*(5.0/9.0));
   return convert;
}

int main()
{
    double dValue=0,dRet=0;
    printf("enter the temperature:");
    scanf("%lf",&dValue);
    dRet=converter(dValue);
    printf("%lf  degree celsius for %lf farenheit ",dRet,dValue);

    return 0;
}

//time complexity:O(1)