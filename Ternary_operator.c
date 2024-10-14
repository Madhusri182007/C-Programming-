#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two integer:");
    scanf("%d %d",&a,&b);
    c=a>b?a:b;
    printf("%d",c);
    return 0;
}
