#include<stdio.h>
int main()
{
    int N,i,Count=0;
    printf("Enter Number:");
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        if(i*i==N)
        {
            Count++;
        }
        if(i*i>N)
        break;
    }
    if(Count==1)
    {
        printf("%d is Perfect Number",N);
    }
    else
    {
        printf("%d is Not a Perfect Number",N);
    }
    return 0;
}
