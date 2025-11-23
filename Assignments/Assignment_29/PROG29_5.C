#include<stdio.h>

void display(int iRow,int iCol)
{
    int i=0,j=0;
     int iNo=1 ;
    
    
   
    for(i=1;i<=iRow;i++)
    {
         int r = i;
        for(j=1;j<=iCol;j++,r++)
        {
          
         
          {
            printf("%d\t",r);
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