#include<stdio.h>
int main()
{
  int N,i,j,count,T;
  printf("Enter array size:");
  scanf("%d",&N);
  int Num[N];
  int Num1[N],x=0;
  for(i=0;i<N;i++)
  {
      scanf("%d",&Num[i]);
  }
  for(i=0;i<=N-1;i++)
  {
      count=0;
      for(j=i+1;j<N;j++)
      {
          if(Num[i]==Num[j])
          {
              count++;
              if(count==1)
              {
                 Num1[x++] =Num[i];
              }
          }
      }
  }
  printf("Repeated Numbers:");
  for(i=0;i<x;i++)
  {
      printf("%d",Num1[i]);
  }
}
