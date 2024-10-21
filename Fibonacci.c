#include<stdio.h>
int main()
{
    int N;
    printf("Enter Number:");
    scanf("%d",&N);
    int res;
    int Num1=0;
    int Num2=1;
    int arr[N];
    printf("%d %d",Num1,Num2);
    for(int i=1;i<=N-2;i++)
    {
        res=Num1+Num2;
        Num1=Num2;
        Num2=res;
        printf("%d ",res);
    }
}
