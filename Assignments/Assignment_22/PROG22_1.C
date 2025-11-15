#include <stdio.h>
#include<stdlib.h>

typedef int* IPTR;

int EvenFrequency(int Arr[],int iSize)
{
    int iCnt=0;
    int iFrequency=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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
    iRet=EvenFrequency(ptr,iLength);
    printf("%d is the frequency of even numbers",iRet);

    free(ptr);

    return 0;


}