#include<stdio.h>
int main()
{
    int N,n,i,a=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(i=0;i<N;i++)
    {
        if(n==i+1 && n==arr[i])
        {
            a=1;
            printf("%d",arr[i]);
        }
    }
    if(a==0)
    {
        printf("-1");
    }
}
