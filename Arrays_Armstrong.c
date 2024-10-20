#include<stdio.h>
int main()
{
    int N,Armstrong=0;
    scanf("%d",&N);
    int Num[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    int i,T,T1,T2,count,sum,product,rem;
    for(int j=0;j<N;j++)
    {
        T=Num[j];
        T1=Num[j];
        T2=Num[j];
        count=0;
        while(T!=0)
        {
            count++;
            T=T/10;
        }
         sum=0;
            rem=0;
        do{
            rem=T1%10;
            product=1;
            for(i=1;i<=count;i++)
            {
                product=product*rem;
            }
            sum=sum+product;
            T1=T1/10;
        }while(T1!=0);
        if(T2==sum)
        {
            Armstrong++;
        }
    }
    printf(" Number of Armstrong Number:%d ",Armstrong);
}
