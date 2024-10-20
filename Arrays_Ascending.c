#include<stdio.h>
int main()
{
    int N;
    int T,i;
    scanf("%d",&N);
    int Num[N];
    for( i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    for(i=0;i<=N-2;i++)
    {
        for(int j=i+1;j<=N-1;j++)
        {
            if(Num[i]>Num[j])
            {
                T=Num[i];
                Num[i]=Num[j];
                Num[j]=T;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",Num[i]);
    }
}
