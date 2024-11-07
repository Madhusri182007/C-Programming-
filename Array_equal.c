#include<stdio.h>
int main()
{
    int N;
    printf("Enter array size:");
    scanf("%d",&N);
    printf("Enter array 1 elements:");
    int i,j,a[N],b[N];
    for(i=0;i<N;i++)
    {
     scanf("%d",&a[i]);   
    }
    printf("Enter array 2 elements:");
     for(i=0;i<N;i++)
    {
     scanf("%d",&b[i]);   
    }
    int C=0;
    for(i=0;i<N;i++)
    {
        if(a[i]==b[i])
        {
            C++;
        }
    }
    if(C==N)
    {
        printf("Both arrays are equal");
    }
    else
    {
        printf("Not equal");
    }
}
