#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;


int Difference(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=Arr[0],iMax=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
         if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];

        }
    }
    return (iMax-iMin);
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

    iRet=Difference(ptr,iLength);
    printf("%d is the difference b/w min & max value",iRet);

    free(ptr);

    return 0;
}