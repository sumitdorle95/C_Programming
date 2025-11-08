#include<stdio.h>



int DiffFact(int iNo)
{
    int i =0;
    int n =0;
    int t=0;
    if(iNo<0)
    {
        (iNo=-iNo);
    }
    for(i=1;i<iNo;i++)
    {
        if((iNo%i)==0)
        {
           n= n+i; 
        }
        else
        {
            t=t+i;
        }
        
    }
    printf("%d",n-t);
}

int main ()
{
    int iValue=0,iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);
   iRet= DiffFact(iValue);
  
    return 0;
}