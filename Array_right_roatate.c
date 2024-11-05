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
    int r;
    printf("Enter number of times to rotate:");
    scanf("%d",&r);
    int C[N];
    int k=1;
    while(k<=r)
    {
        for(j=0;j<N;j++)
        {
            if(j!=0)
            {
            C[j]=a[j-1];
            }
            else
            {
                C[j]=a[N-1];
            }
        }
            for(i=0;i<N;i++)
            {
               a[i]=C[i];
            }
            k++;
    }
    printf("Roted array:");
    for(i=0;i<N;i++)
    {
        printf("%d ",C[i]);
    }
}
