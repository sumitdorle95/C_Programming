#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while(*str!='\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
            *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            return true;
        }
       
        str++;

    }
     
        
        return false;
        
   
}



int main()
{
    char Arr[50]={};
    bool bRet=false;
    printf("enter the string:");
    scanf("%[^'\n']s",&Arr);
    bRet=CheckVowel(Arr);
    if(bRet==true)
    {
        printf("it has vowels");
    }
    else
    {
         printf("it doesnt have vowels");
    }

    return 0;

}