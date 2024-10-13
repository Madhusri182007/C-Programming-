#include<stdio.h>
int main()
{
    int Due_Dates;
    printf("Enter the Due dates:");
    scanf("%d",&Due_Dates);
    if(Due_Dates>=1 && Due_Dates<=5)
    {
        printf("Fine=50 Paise");
    }
    else if(Due_Dates>=6 && Due_Dates<=10)
    {
        printf("Fine=1 Rupee");
    }
    else if(Due_Dates>=11 && Due_Dates<=29)
    {
        printf("Fine=5 Rupees");
    }
    else if(Due_Dates>=30)
    {
        printf("Membership Cancelled");
    }
    else if(Due_Dates==0 ||Due_Dates<0)
    {
        printf("No fine");
    }
    return 0;
}
