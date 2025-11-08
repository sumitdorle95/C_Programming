#include <stdio.h>

void factorsdisplay(int iNo)
{
    int iCnt=0;
   if(iNo<0)
   {
     (iNo=-iNo);
   }
   
    
         for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
         printf("%d\t",iCnt);
      
       
       
    }
   

    
   
}

int main ()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    factorsdisplay(iValue);
     
   
    return 0;

}


//time complexity: O(n)