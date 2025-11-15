#include<stdio.h>
#include<stdlib.h>


typedef int* IPTR;


int Difference(int Arr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd=iOdd+Arr[iCnt];
        }
    }
    return (iEven-iOdd);

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
    printf("the difference b/w even and odd elements is %d",iRet);

    free(ptr);


    return 0;
}