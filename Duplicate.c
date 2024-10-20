#include<stdio.h>
int main()
{
  int N,i,j,count,T;
  printf("Enter array size:");
  scanf("%d",&N);
  int Num[N];
  for(i=0;i<N;i++)
  {
      scanf("%d",&Num[i]);
  }
  count=0;
  for(i=0;i<=N-1;i++)
  {
      for(j=i+1;j<N;j++)
      {
          if(Num[i]==Num[j])
          {
              count++;
              
            break;
          }
      }
  }
  printf("count:%d",count);
}
