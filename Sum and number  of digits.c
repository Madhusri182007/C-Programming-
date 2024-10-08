#include<stdio.h>
int main()
{
    int N,count,rem,sum=0;
    printf("Enter the digits:");
    scanf("%d",&N);
    while(N!=0)
    {
        count++;
        rem=N%10;
        sum=sum+rem;
        N=N/10;
    }
    printf("Number of digits:%d\n",count);
    printf("Sum of digits:%d\n",sum);
}
