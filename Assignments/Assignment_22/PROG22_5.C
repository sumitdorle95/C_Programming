#include <stdio.h>
#include <stdlib.h>

typedef int* IPTR;

int CheckFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0, iValue = 0;
    IPTR ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    ptr = (IPTR)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the number whose frequency is to be calculated: ");
    scanf("%d", &iValue);

    iRet = CheckFrequency(ptr, iLength, iValue);

    printf("Frequency of %d is %d\n", iValue, iRet);

    free(ptr);
    return 0;
}
