#include<stdio.h>
int main()
{
    int N,p=0,n=0,Value;
    printf("Enter how many values you want:");
    scanf("%d",&Value);
    printf("Enter %d values:\n",Value);
    int i=1;
    while(i<=Value)
    {
        scanf("%d",&N);
        if(N>0)
        {
            p++;
        }
        else if(N<0)
        {
            n++;
        }
        i++;
    }
    printf(" Number of Positive numbers:%d",p);
    printf("\nNumber of Negative numbers:%d",n);
    
}
