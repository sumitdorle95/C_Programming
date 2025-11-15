#include<stdio.h>
#include<stdlib.h>

typedef int* IPTR;

void Range(int Arr[],int iSize, int iStart, int iEnd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]>iStart)&&(Arr[iCnt]<iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}



int main()
{
    int iLength=0,iCnt=0,iValue1=0,iValue2=0;
    IPTR ptr = NULL;

    printf("enter the no of elements:");
    scanf("%d",&iLength);

    ptr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL ==ptr)
    {
        printf("memory allocation failed");
        return -1;
    }

    printf("enter the range:");
    scanf("%d %d",&iValue1,&iValue2);


    printf("enter the elements:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Range(ptr,iLength,iValue1,iValue2);

    free(ptr);


    return 0;
}