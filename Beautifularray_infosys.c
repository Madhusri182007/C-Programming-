#include<stdio.h>
int main()
{
  int L,N,i,j,C=0,C1=0,C2=1;
  scanf("%d",&N);
  scanf("%d",&L);
  int a[L];
  for(i=0;i<L;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<L;i++)
  {
    if(a[i]>=1 && a[i]<=N)
    {
      C++;
    }
  }
  C1=1;
  C2=1;
  for(i=0;i<=L-2;i++)
  {
    for(j=i+1;j<L;j++)
    {
      if(a[i]==a[j])
      {
         C1=0;
      }
    }
  }
  int t;
  for(i=0;i<L;i++)
  {
       for(j=i+1;j<=i+1;j++)
       {
           t=a[i];
           if(a[j]==t+1)
           {
               C2=0;
               break;
           }
       }
  }
  if(C==L && C1 && C2)
  {
    printf("True");

  }
  else
  {
      printf("False");
  }
}
