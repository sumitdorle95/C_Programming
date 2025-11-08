#include <stdio.h>

void addrangedisplay(int iNo1, int iNo2)
{
    int iCnt=0;
    int add =0;
    if(iNo1<0||iNo2<0||iNo1>iNo2)
    {
        printf("invalid range");
       
    }
    else
    {   
         for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
       
        add= add+iCnt;
       
         
       
    }

     printf("%d is the additon of range",add);
    

    }
    
    
        
    
        

    }
   
        
     
    
    
    

   
    


int main ()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("enter the range:");
    scanf("%d  %d",&iValue1,&iValue2);
    addrangedisplay(iValue1,iValue2);
    
    
    
   

    return 0;

}


//time complexity: O(n)