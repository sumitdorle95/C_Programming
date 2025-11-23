#include<stdio.h>

void display(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>0;j--)
        {
            printf("%d\t",j);
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