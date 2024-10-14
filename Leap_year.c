#include<stdio.h>
int main()
{
   int Year;
   printf("Enter the year:");
   scanf("%d",&Year);
   if(Year%4==0 && Year%100!=0 || Year%400==0)
   {
       printf("Leap year");
   }
   else
   {
       printf("Not leap year");
   }
    return 0;
}
