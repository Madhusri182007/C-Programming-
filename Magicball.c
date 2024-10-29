#include<stdio.h>
int main()
{
  int N,i,j;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  int c;
  for(i=0;i<N;i++)
  {
    c=1;
    if(a[i]!=0)
    {
      for(j=0;j<N;j++)
      {
        if(i!=j &&a[j]%a[i]!=0)
        {
          c=0;
          break;
        }
      }
      if(c)
      {
          printf("%d",a[i]);
          return 0;
      }
    }
  }
  printf("-1");
}
