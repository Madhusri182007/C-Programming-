#include<stdio.h>
int main()
{
    int N,count=0,num=1,i,a=1;
    scanf("%d",&N);
    while(count<N)
    {
        num++;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                a=0;
                break;
            }
            else
            {
                a=1;
            }
        }
        if(a)
        {
            count++;
        }
    }
    printf("%d",num);
}
