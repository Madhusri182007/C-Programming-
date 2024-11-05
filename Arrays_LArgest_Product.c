#include<stdio.h>
int main()
{
    int N,i,j,t;
    scanf("%d",&N);
    int a[N],b[N];
    printf("Enter array 1elemnts:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array 2elemnts:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=N-2;i++)
    {
        for(j=i+1;j<=N-1;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
     for(i=0;i<=N-2;i++)
    {
        for(j=i+1;j<=N-1;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printf("Largest element in array1:%d\n",a[0]);
    printf("Largest element in array2:%d",b[0]);
    printf("Product:%d",a[0]*b[0]);
}
