#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;


void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        int num = Arr[iCnt];
        int iDigit = 0;

        if(num < 0)
        {
            num = -num;   
        }

        while(num != 0)
        {
            num = num / 10;
            iDigit++;
        }

        if(iDigit == 3)
        {
            printf("%d ", Arr[iCnt]);
        }
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

    Digits(ptr,iLength);
    
    free(ptr);

    return 0;
}