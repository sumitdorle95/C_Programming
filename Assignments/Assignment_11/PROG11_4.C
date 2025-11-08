#include <stdio.h>

void addevenrangedisplay(int iNo1, int iNo2)
{
    int iCnt=0;
    int add =0;
    if(iNo1<0||iNo2<0||iNo1>iNo2)
    {
        printf("invalid range");
        
    }
    else
    {
         for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        if((iCnt%2)==0)
        add= add+iCnt;
       
       
    }
    printf("%d is the additon of even range",add);

    }
   
}

int main ()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("enter the range:");
    scanf("%d %d",&iValue1,&iValue2);
    addevenrangedisplay(iValue1,iValue2);
     
   
    return 0;

}


//time complexity: O(n)