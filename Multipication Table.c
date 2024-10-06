#include<stdio.h>
int main()
{
    int N,i,Multiply=1;
    printf("Enter the number:");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
       Multiply=i*N;
       printf("%d*%d=%d\n",i,N,i*N);
    }
    return 0;
}
