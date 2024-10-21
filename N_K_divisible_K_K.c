#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int a=1;
    int count=0;
    while(a)
    {
        if(a%K==0)
        {
            printf("%d ",a);
            count++;
        }
        else if(a/10==K)
        {
            printf("%d ",a);
            count++;
        }
        else if(a%10==K)
        {
            printf("%d ",a);
            count++;
        }
        if(count==N)
        {
           break;
        }
        a++;
    }
    printf("\n%d",a);
}
