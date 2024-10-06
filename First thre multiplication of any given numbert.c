#include<stdio.h>
int main()
{
    int N,i,Multiply=1;
    printf("Enter the number:");
    scanf("%d",&N);
    for(i=1;i<=3;i++)
    {
       Multiply=i*N;
       printf("%d ",Multiply);
    }
    return 0;
}
