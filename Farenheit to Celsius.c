#include<stdio.h>
int main()
{
   float Celsius,Farenheit;
   printf("Enter Farenheit:");
   scanf("%f",&Farenheit);
   Celsius=(Farenheit-32)*5/9;
   printf("Farenheit:%.2f",Celsius);
   return 0;
}
