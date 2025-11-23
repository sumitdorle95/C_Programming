#include<stdio.h>

void display(int iRow,int iCol)
{
    int i=0,j=0;
    
    
   
    for(i=1;i<=iRow;i++)
    {
          int iNo1=1 ;
           
        for(j=1;j<=iCol;j++,iNo1++)
        {
            
             
            
            if((i%2)==0)
            {
               
                printf("%d\t",(iNo1*2)-1);
               
            }
            else
            {
                
                printf("%d\t",(iNo1*2));
                
            }
            
            
            
             
          
                 
                
            
           
        }
       
        
        printf("\n");
    }
}


 int main()
 {
    int iValue1=0,iValue2=0;
    printf("enter the no of rows:");
    scanf("%d",&iValue1);
    printf("enter the no of columns:");
    scanf("%d",&iValue2);

    display(iValue1,iValue2);

    return 0;

 }