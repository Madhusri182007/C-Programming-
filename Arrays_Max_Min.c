#include <stdio.h>
int main()
{
   int N,i;
   scanf("%d",&N);
   int Num[N];
   for(i=0;i<N;i++)
   {
       scanf("%d",&Num[i]);
   }
   int Max=Num[0];
   int Min=Num[0];
   for(i=1;i<N;i++)
   {
       if(Num[i]>Max)
       {
           Max=Num[i];
       }
       else if(Num[i]<Min)
       {
           Min=Num[i];
       }
   }
   printf("Maximum number:%d\n",Max);
   printf("Minimum Number:%d",Min);
    return 0;
}
