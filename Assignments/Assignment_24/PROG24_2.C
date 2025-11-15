#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;


int Min(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=0;
    for(iMin=Arr[0],iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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

    iRet=Min(ptr,iLength);
    printf("%d is the min value",iRet);

    free(ptr);

    return 0;
}