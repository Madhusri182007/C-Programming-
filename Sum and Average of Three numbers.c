#include<stdio.h>
int main()
{
   int Num1,Num2,Num3,Sum;
   float Average;
   printf("Enter 3 numbers:");
   scanf("%d %d %d",&Num1,&Num2,&Num3);
   Sum=Num1+Num2+Num3;
   Average=Sum/3;
   printf("Sum:%d\n",Sum);
   printf("Average:%.2f\n",Average);
    return 0;
}
