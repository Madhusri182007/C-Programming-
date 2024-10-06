#include<stdio.h>
int main()
{
   int Kilometer,Metre,Centimetre;
   printf("Enter kilometer:");
   scanf("%d",&Kilometer);
   Metre=Kilometer*1000;
   Centimetre=Metre*100;
   printf("Kilometer:%d\n",Kilometer);
   printf("Metre:%d\n",Metre);
   printf("Centimetre:%d\n",Centimetre);
    return 0;
}
