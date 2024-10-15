#include<stdio.h>
int main()
{
    int N,i,Even_Count=0,Odd_Count=0,Even_Sum=0,Odd_Sum=0,Difference_Count=0,Difference_Sum=0;
    printf("Enter the size of array:");
    scanf("%d",&N);
    int Num[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    for(i=0;i<N;i++)
    {
        if(Num[i]%2==0)
        {
            Even_Count++;
            printf("\nEven number:%d ",Num[i]);
            Even_Sum=Even_Sum+Num[i];
        }
        else if(Num[i]%2==1)
        {
            Odd_Count++;
            printf("\nOdd Number:%d ",Num[i]);
            Odd_Sum=Odd_Sum+Num[i];
        }
    }
    if(Even_Count<Odd_Count)
    {
        Difference_Count=-(Even_Count-Odd_Count);
    }
    else
    {
        Difference_Count=Even_Count-Odd_Count;
    }
    if(Even_Sum<Odd_Sum)
    {
        Difference_Sum=-(Even_Sum-Odd_Sum);
    }
    else
    {
    Difference_Sum=Even_Sum-Odd_Sum;
    }
    printf("\nNumber of even numbers:%d\n",Even_Count);
    printf("Number of odd numbers:%d\n",Odd_Count);
    printf("Sum of even numbers:%d\n",Even_Sum);
    printf("Sum of odd numbers:%d\n",Odd_Sum);
    printf("Difference of number of even and odd numbers:%d\n",Difference_Count);
    printf("Difference of sum of even and odd numbers:%d\n",Difference_Sum);
    return 0;
}
