#include<stdio.h>
int main()
{
    int N;
    printf("N=");
    scanf("%d",&N);
    printf("Factors:");
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            printf("%d ",i);
        }
    }
}
