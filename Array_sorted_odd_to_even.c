#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    printf("Enter array elemnts:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int C[N];
    int c=0;
    j=0;
    for(i=0;i<N;i++)
    {
        if(a[i]%2==1)
        {
            C[j]=a[i];
           c++;
           j++;
        }
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            C[j]=a[i];
            j++;
        }
    }
    printf("Array:");
    for(i=0;i<N;i++)
    {
        printf("%d ",C[i]);
    }
    
}
