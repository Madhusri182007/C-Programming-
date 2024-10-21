#include<stdio.h>
int main()
{
    int N,factor=0;
    int num,i;
    printf("Enter Number:");
    scanf("%d",&N);
  
        factor=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
            {
                factor++;
                break;
            }
        }
        if(factor==0 && N!=1)
        {
            printf(" Prime:%d ",N);
        }
}
