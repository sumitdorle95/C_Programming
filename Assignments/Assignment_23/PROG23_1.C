#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int* IPTR;

bool check(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }
    }

    return bFlag;
}


int main()
{
    int iCnt=0,iLength=0,iValue=0;
    bool bRet=false;
    IPTR ptr=NULL;
    
    printf("enter the no of elements:");
    scanf("%d",&iLength);
    
    ptr=(IPTR)malloc(iLength*sizeof(int));
    
    if(NULL==ptr)
    {
        printf("memory allocation failed");
        return -1;
    }

     printf("enter the  elements:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    
    printf("enter the number to checked:");
    scanf("%d",&iValue);

    
    bRet=check(ptr,iLength,iValue);

    
    if(bRet==true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }


    free(ptr);


    return 0;
}


