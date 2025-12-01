#include<stdio.h>

int Strlenx(char *str)
{
    static int iCount=0;
    static char *temp = NULL;
    if(temp==NULL)
    {
        temp=str;
    }

    while(*str!='\0')
    {
        str++;
    }
    
  


    while(temp!=str)
    {
        temp++;
        iCount++;
        Strlenx(str);
    }

    return iCount;
}


int main()
{
    int iRet=0;
    char Arr[50];
    printf("enter the string:");
    scanf("%[^'\n']s",Arr);

    iRet=Strlenx(Arr);

    printf("length of string is %d",iRet);


    return 0;

}