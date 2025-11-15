#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int* IPTR;

bool check(int Arr[],int iSize)
{
    int iCnt=0;
    bool bFlag=false;
    int iCount=0,iCount2=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt])==11)
        {
            bFlag=true;
            break;
        }
      
    }
    return bFlag;
}


int main()
{
    int iLength=0,iRet=0;
    int iCnt=0;
    bool bRet=false;
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
    bRet=check(ptr,iLength);
   if(bRet==true)
   {
    printf("11 is present");
   }
   else
   {
     printf("11 is not present");
   }
    free(ptr);

    return 0;


}