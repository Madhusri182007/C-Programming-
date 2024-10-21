#include<stdio.h>
int main()
{
    int N,M,count=0;
    printf("Enter starting:");
    scanf("%d",&N);
    printf("Enter ending :");
    scanf("%d",&M);
    for(int i=N;i<=M;i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nNo of integers:%d",count);
    return 0;
}
