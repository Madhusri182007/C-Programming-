#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int mul(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    return a* mul(a,b-1);
}
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int res=mul(a,b);
    printf("The value of %d power %d is %d",a,b,res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
