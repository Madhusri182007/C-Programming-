#include<stdio.h>
int main()
{
    int N,M,i,j;
    scanf("%d %d",&N,&M);
    int a[N],b[M];
    printf("Enter 1st array:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd array:");
    for(i=0;i<M;i++)
    {
        scanf("%d",&b[i]);
    }
    int C[M+N];
    j=0;
        for(i=0;i<M+N;i+=2)
        {
            
          if(i%2==0)
          {
             C[i]=a[j];
             j++;
          }
        }
         j=0;
        for(i=1;i<M+N;i+=2)
        {
            if(i%2==1)
            {
               C[i]=b[j];
               j++;
            }
            
        }
       printf("Merged array:");
        for(i=0;i<M+N;i++)
        {
            printf("%d ",C[i]);
        }
}
