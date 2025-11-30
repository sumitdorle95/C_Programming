#include<stdio.h>
#include<stdbool.h>

void CheckDivision(char ch)
{
    
   switch(ch)
   {
     case ('A'):
     case('a'):
     {
        printf("your exam is at 7 am");
        break;
     }
     case ('B'):
     case ('b'):
     {
        printf("your exam is at 8.30 am");
        break;
     }
     case ('C'):
     case('c'):
     {
        printf("your exam is at 9.20 am");
        break;
     }
     case ('D'):
     case('d'):
     {
        printf("your exam is at 10.30 am");
        break;
     }

     default:
     
     {
        printf("you dont have an exam");
        
     }



   }


}


int main()
{
    char cValue='\0';
   
    printf("enter your division:");
    scanf("%c",&cValue);
    CheckDivision(cValue);

   

    return 0;
    
}


