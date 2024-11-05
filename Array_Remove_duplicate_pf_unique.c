#include<stdio.h>
int main()
{
    int N,i,j,C=0;
    scanf("%d",&N);
    int a[N];
    printf("Enter array elemnts:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=N-2;i++)
    {
        for(j=i+1;j<=N-1;j++)
        {
            if(a[j]!=-999)
            {
            if(a[i]==a[j])
            {
               a[j]=-999;
            }
            }
        }
    }
    printf("Array unique elemnets:");
    for(i=0;i<N;i++)
    {
        if(a[i]!=-999)
        {
            printf("%d ",a[i]);
        }
    }
    
}
