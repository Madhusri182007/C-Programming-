#include<stdio.h>
int main()
{
    int N,rem,Sum=0,t;
    printf("Enter tha number:");
    scanf("%d",&N);
    t=N;
    while(N>0)
    {
        rem=N%10;
        Sum=Sum*10+rem;
        N=N/10;
    }
    printf("Reversed number:%d\n",Sum);
    if(t==Sum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
}
