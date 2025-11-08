#include <stdio.h>

void number(int iNo)
{
    switch (iNo / 50)
    {
        case 0:
            printf("%d is a small number", iNo);
            break;
        case 1:
            printf("%d is a medium number", iNo);
            break;
        default:
            printf("%d is a large number", iNo);
            break;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    number(iValue);

    return 0;
}


//TIME COMPLEXITY:O(1)