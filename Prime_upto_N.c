#include<stdio.h>
int main()
{
    int N,factor=0;
    int num,i;
    printf("Enter Number:");
    scanf("%d",&N);
    for(num=1;num<=N;num++)
    {
        factor=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                factor++;
                break;
            }
        }
        if(factor==0 && num!=1)
        {
            printf("%d ",num);
        }
    }
}
