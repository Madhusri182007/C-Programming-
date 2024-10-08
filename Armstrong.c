#include<stdio.h>
int main()
{
    int N,T,T1,Count=0,rem,i,Product=1,Sum=0,C,i1;
    printf("Enter the number:");
    scanf("%d",&N);
    T=N;
    T1=N;
    while(T!=0)
    {
        Count++;
        T=T/10;
    }
    printf("Number of Digits:%d\n",Count);
    for(i1=1;i1<=T1;i++)
    {
        rem=T1%10;
        for(i=1;i<=Count;i++)
        {
           C=Product*rem;
        }
        Sum=Sum+C;
        T=T/10;
    }while(T1!=0);
    printf("Armstrong number:%d",Sum);
}
