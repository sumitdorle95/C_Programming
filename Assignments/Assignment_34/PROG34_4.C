#include<stdio.h>
#include<stdbool.h>


bool CheckSpecial(char ch)
{
    if(ch>=33 && ch<=47)
     {
       return true;

     }
     else if(ch>=58 && ch<=63)
     {
        return true;
     }
     else if(ch>=91 && ch<=96)
     {
        return true;
     }
     else if(ch>=123 && ch<=127)
     {
        return true;
     }
     else
     {
        return false;
     }
     

    
}



int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("enter the character:");
    scanf("%c",&cValue);
    bRet=CheckSpecial(cValue);

    if(bRet==true)
    {
        printf("%c is a special character",cValue);

    }
    else
    {
        printf("%c is not a special character",cValue);
    }


    return 0;
}