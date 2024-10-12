#include<stdio.h>
int main()
{
   int Number,Octagonal_Number;
   printf("Enter the number:");
   scanf("%d",&Number);
   Octagonal_Number=((3*Number*Number)-(2*Number));
   printf("The Octagonal Number of %d is:%d",Number,Octagonal_Number);
   return 0;
}
