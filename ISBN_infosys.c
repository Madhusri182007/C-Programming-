#include<stdio.h>
int main()
{
    long int N,t,t1;
    scanf("%ld",&N);
    t=N;
    t1=N;
    int count=0;
    while(t!=0)
    {
        count++;
        t=t/10;
    }
    int arr[count];
    int rem=0;
    int i=count-1;
    int Sum=0;
    while(t1!=0)
    {
        rem=t1%10;
        arr[i]=rem;
        t1=t1/10;
        i--;
    }
    for(i=0;i<count;i++)
    {
        if(i%2==0)
        {
            Sum=Sum+arr[i];
        }
        else
        {
            Sum=Sum+3*arr[i];
        }
    }
    int last;
    last=10-(Sum)%10;
    if(last==10)
    {
        last=0;
    }
    printf("%ld%d",N,last);
}
