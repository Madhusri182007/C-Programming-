#include<stdio.h>
int main()
{
    int N,factor=0;
    int i,j,product;
    printf("Enter Number:");
    scanf("%d",&N);
      product=1;
    for(i=1;i<=N;i++)
    {
        factor=0;
        if(N%i==0)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    factor++;
                    break;
                }
            }
          
            if(factor==0 && N!=1)
            {
                product=product*i;
            }
        }
    }
    printf("Product:%d\n",product);
   
}
