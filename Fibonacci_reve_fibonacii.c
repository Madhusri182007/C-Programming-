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
    arr[0]=Num1;
    arr[1]=Num2;
    printf("%d %d",Num1,Num2);
    for(int i=2;i<N;i++)
    {
        res=Num1+Num2;
        arr[i]=res;
        Num1=Num2;
        Num2=res;
        printf("%d ",res);
    }
    printf("\n");
    for(int j=N-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
}
