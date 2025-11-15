#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;


int Max(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=0;
    for(iMax=Arr[0],iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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

    iRet=Max(ptr,iLength);
    printf("%d is the max value",iRet);

    free(ptr);

    return 0;
}