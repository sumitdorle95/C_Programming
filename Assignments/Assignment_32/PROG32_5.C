#include<stdio.h>
 void display(int iRow, int iCol)
{
    int i,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==j||(i==1)||(i==iRow)||(j==iCol)||(j==1)))
            {
                printf("%d\t",j+1);
            }
           
            else  
            {
               
                printf("\t");
            }
        }
        printf("\n");

    }
        
}
 

 int main()
 {
    int iValue,iValue2=0;

    printf("enter the no of rows and columns:");
    scanf("%d%d",&iValue,&iValue2);
    display(iValue,iValue2);

    return 0;
 }