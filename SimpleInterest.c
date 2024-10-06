#include<stdio.h>
int main()
{
   int PrincipleAmount,Time,RateofInterest,SimpleInterest;
   printf("Enter PrincipleAmount:");
   scanf("%d",&PrincipleAmount);
   printf("Enter Time:");
   scanf("%d",&Time);
   printf("Enter Rate of Interest:");
   scanf("%d",&RateofInterest);
   SimpleInterest=PrincipleAmount*RateofInterest*Time/100;
   printf("Simple Interest:%d",SimpleInterest);
   return 0;
}
