#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int LastOccurence(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=iSize-1;iCnt>-1;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCnt;
            break;
        }
      
        
        
    }
     return -1;
}


int main()
{
    int iLength=0,iValue=0,iCnt=0,iRet=0;
    IPTR ptr =NULL;

    printf("enter the number whose index is to be noted:");
    scanf("%d",&iValue);

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

   iRet= LastOccurence(ptr,iLength,iValue);
    if(iRet==-1)
    {
        printf("there is no such number");
    }
    else
    {
         printf("%d is the last occurence index of %d",iRet,iValue);
    }

    free(ptr);


    return 0;
}