#include<stdio.h>
int main()
{
    int N;
    printf("Enter array size:");
    scanf("%d",&N);
     if(N>0)
    {
    printf("Enter array elements:");
    int i,j,a[N];
    for(i=0;i<N;i++)
    {
     scanf("%d",&a[i]);   
    }
    int duplicate=0,index=0;
    for(i=0;i<=N-2;i++)
    {
        for(j=i+1;j<=N-1;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=a[i];
                index=j;
            }
        }
    }
    if(duplicate==0 && index==0)
    {
        printf("No duplicate found");
    }
    else
    {
    printf("Last index:%d\n",index);
    printf("Last duplicate element:%d",duplicate);
    }
    }
    else
    {
        printf("Invalid array size");
    }
}
