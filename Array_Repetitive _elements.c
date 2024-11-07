#include<stdio.h>
int main()
{
    int N;
    printf("Enter array size:");
    scanf("%d",&N);
    printf("Enter array elements:");
    int i,j,a[N];
    for(i=0;i<N;i++)
    {
     scanf("%d",&a[i]);   
    }
    int C;
    for(i=0;i<=N-2;i++)
    {
        if(a[i]!=-999)
        {
        C=0;
        for(j=i+1;j<=N-1;j++)
        {
            if(a[i]==a[j])
            {
                C++;
                a[j]=-999;
            }
        }
        if(C!=0)
        {
            printf("Repetitive elment is:%d",a[i]);
        }
        }
    }
    if(C==0)
    {
        printf("Array elements are not repeated");
    }
}
