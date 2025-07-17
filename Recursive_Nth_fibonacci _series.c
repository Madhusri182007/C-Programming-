#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fibo(int n)
{
    if(n==0 )
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main() {
    int n;
    scanf("%d",&n);
    int res=fibo(n-1);
    printf("The term %d in the Fibonacci series is %d",n,res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
