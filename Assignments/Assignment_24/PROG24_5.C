#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;


void DigitSum(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        int iNo = Arr[iCnt];
        int iDigit = 0,iSum=0;
        
        while(iNo != 0)
        {
             iDigit = iNo % 10;  
            iSum = iDigit + iSum;
            iNo = iNo / 10;       
        }

        printf("sum of digits of %d is %d\n", Arr[iCnt], iSum);
    }
}




int main()
{
    int iLength=0,iCnt=0,iRet=0;
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

    DigitSum(ptr,iLength);
    
    free(ptr);

    return 0;
}