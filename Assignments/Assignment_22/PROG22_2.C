#include <stdio.h>
#include<stdlib.h>

typedef int* IPTR;

int DiffFrequency(int Arr[],int iSize)
{
    int iCnt=0;
    int iCount=0,iCount2=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCount++;
        }
        else
        {
            iCount2++;
        }
    }
    return (iCount-iCount2);
}


int main()
{
    int iLength=0,iRet=0;
    int iCnt=0;
    IPTR ptr =NULL;
    printf("enter the no of elements:");
    scanf("%d",&iLength);
    ptr= (IPTR)malloc(iLength*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed");
        return -1;
    }

    printf("enter the elements:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=DiffFrequency(ptr,iLength);
    printf("%d is the difference of frequency of even & odd numbers",iRet);

    free(ptr);

    return 0;


}