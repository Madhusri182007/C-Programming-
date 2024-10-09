#include<stdio.h>
int main()
{
  int N,count=0,rem,s,t;
  printf("Enter digit:");
  scanf("%d",&N);
  t=N;
  while(N!=0)
  {
      count++;
      N=N/10;
  }
  if(count>=2)
  {
      rem=t%10;
      s=(t/10)%10;
      printf("Last two digits:%d%d",s,rem);
  }
    return 0;
}
