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
    int n=N-1;
    int t=0;
    for(i=0;i<N;i++)
    {
       if(a[i]!=0)
       {
         C[t]=a[i];
         t++;
       }
    }
    for(i=0;i<N;i++)
    {
        if(a[i]==0)
        {
          C[t]=a[i]; 
          t++;
        }
    }
   for(i=0;i<N;i++)
   {
       printf("%d ",C[i]);
   }
    
}
