#include<stdio.h>

int factorial(int iNo)
{

    static int iCnt=-1,iFact=1;
    
    if(iCnt==-1)
    {
       iCnt=iNo;
    }

   
    
  


    while(iCnt!=0)
    {
        iFact=iCnt*iFact;
        iCnt--;
        factorial(iNo);
    }

    return iFact;
}


int main()
{
    int iRet=0,iValue=0;
    
    printf("enter number:");
    scanf("%d",&iValue);

    iRet=factorial(iValue);

    printf("factorial is %d",iRet);


    return 0;

}