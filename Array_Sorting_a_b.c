#include<stdio.h>
int main()
{
    int N;
    printf("Enter Array size:");
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b,t,i,j;
    printf("Enter A and B:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
       t=a;
       a=b;
       b=t;
    }
    for(i=a;i<=b-1;i++)
    {
        for(j=i+1;j<=b;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
