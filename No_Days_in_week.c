#include<stdio.h>
int main()
{
    int Week_Number,i,Week_Days;
    printf("Enter the week number:");
    scanf("%d",&Week_Number);
    for(i=1;i<=Week_Number;i++)
    {
        Week_Days=i*7;
    }
    printf("Number of days in a week =%ddays",Week_Days);
}
