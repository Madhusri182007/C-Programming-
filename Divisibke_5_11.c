#include<stdio.h>
int main()
{
    int N;
    printf("Enter Number:");
    scanf("%d",&N);
    if(N%5==0 && N%11==0)
    {
        printf("%d is divisible by both 11 and 5",N);
    }
    else
    {
        printf("Only 55 is divisible by both 11 and 5");
    }
    return 0;
}
