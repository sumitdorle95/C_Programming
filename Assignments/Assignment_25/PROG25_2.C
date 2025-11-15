#include<stdio.h>
#include<stdlib.h>


typedef int* IPTR;


void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%5)==0)
        {
           printf("%d\t",Arr[iCnt]);
        }
       
    }
    

}


int main()
{
    int iLength=0,iCnt=0;

    IPTR ptr=NULL;

    printf("enter the no of elements:");
    scanf("%d",&iLength);

    ptr=(IPTR)malloc(iLength*sizeof(int));
    if(NULL==ptr)
    {
        printf("memory allocation failed");
        return -1;
    }

    printf("enter the elements:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);
    

    free(ptr);


    return 0;
}