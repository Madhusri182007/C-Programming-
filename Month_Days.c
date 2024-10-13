#include<stdio.h>
int main()
{
    int Month_Number,i,Month_Days;
    printf("Enter the Month number:");
    scanf("%d",&Month_Number);
    
    for(i=Month_Number;i<=Month_Number;i++)
    {
        if(Month_Number==2)
       {
        printf("February:28 days");
        }
         else if(Month_Number%2==0 && Month_Number==6)
        {
            printf("30 days");
        }
        if(Month_Number%2==0 && Month_Number==4)
        {
            printf("May 31 days");
        }
        else if(Month_Number%2==0 && Month_Number!=2 && Month_Number!=6)
        {
            printf("31 days");
        }
        else if(Month_Number%2==1 && Month_Number==9)
        {
            printf("October 30 days");
        }
        else if(Month_Number%2==1 && Month_Number!=11)
        {
            printf("31 days");
        }
        else if(Month_Number%2==1 && Month_Number==11)
        {
            printf("30 days");
        }
       
    }
    return 0;
}
