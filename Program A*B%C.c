#include<stdio.h>
int main()
{
   int A,B,C,D;
   printf("Enter A:");
   scanf("%d",&A);
   printf("Enter B:");
   scanf("%d",&B);
   printf("Enter C:");
   scanf("%d",&C);
   D=A*B%C;
   printf("%d",D);
    return 0;
}
