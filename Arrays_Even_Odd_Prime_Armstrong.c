#include<stdio.h>
int main()
{
    int N,Count_Even=0,Count_Odd=0,factor,prime;
    int Sum=0,Count=0,T1,Temp,Tempp,rem,Product,Armstrong=0;
    int i,k;
    printf("Enter Size of Array:");
    scanf("%d",&N);
    int Num[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
        if(Num[i]%2==0)
        {
            Count_Even++;
        }
        else if(Num[i]%2==1)
        {
            Count_Odd++;
        }
    }
    for(i=0;i<N;i++)
    {
        factor=0;
        for(int j=2;j<=Num[i]/2;j++)
        {
            if(Num[i]%j==0)
            {
                factor++;
                break;
            }
        }
        if(factor==0)
        {
            prime++;
        }
    }
    for(i=0;i<N;i++)
    {
        T1=Num[i];
        Temp=Num[i];
        Tempp=Num[i];
        while(Temp!=0)
        {
            Count++;
            Temp=Temp/10;
        }
        for(i=0;i<N;i++)
        {
        do
        {
            rem=Tempp%10;
            Product=1;
            for(int k=1;k<=Count;k++)
            {
                Product=Product*rem;
            }
            Sum=Sum+Product;
            Tempp=Tempp/10;
        }while(Tempp!=0);
        }
        
    }
    printf("Number of even numbers:%d\n",Count_Even);
    printf("Number of odd numbers:%d\n",Count_Odd);
    printf("Numbe of Prime numbers:%d\n",prime);
   // printf("Number of Armstrong number:%d\n",Armstrong);
}
