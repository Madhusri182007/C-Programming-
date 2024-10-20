#include<stdio.h>
int main()
{
    int N,M,i;
    printf("N=");
    scanf("%d",&N);
    printf("M=");
    scanf("%d",&M);
    for(i=1;i<=M;i++)
    {
       printf("%d * %d =%d\n",N,i,N*i);
    }
}
