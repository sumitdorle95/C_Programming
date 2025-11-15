#include<stdio.h>
#include<stdlib.h>

typedef int* IPTR;

int OddProduct(int Arr[],int iSize)
{
    int iCnt=0,iProduct=1;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iProduct=iProduct*Arr[iCnt];
        }
    }
    return iProduct;
}



int main()
{
    int iLength=0,iCnt=0,iRet=0;
    IPTR ptr = NULL;

    printf("enter the no of elements:");
    scanf("%d",&iLength);

    ptr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL ==ptr)
    {
        printf("memory allocation failed");
        return -1;
    }

  


    printf("enter the elements:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=OddProduct(ptr,iLength);
    printf("%d is the product of all odd elements",iRet);

    free(ptr);


    return 0;
}