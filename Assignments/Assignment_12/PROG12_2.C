#include <stdio.h>

void factorscount(int iNo)
{
    int iCnt=0;
    int factors=0;
   if(iNo<0)
   {
     (iNo=-iNo);
   }
   
    
         for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        factors++;
        
      
       
       
    }
     
     printf("no of factors is %d",factors);
   

    
   
}

int main ()
{
    int iValue=0;
    printf("enter the number:");
    scanf("%d",&iValue);
    factorscount(iValue);
     
   
    return 0;

}


//time complexity: O(n)