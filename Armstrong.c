#include<stdio.h>
int main()
{
    int N,t1,t,Product,sum=0,i,rem,count=0;
    printf("Enter the number:");
    scanf("%d",&N);
    t1=N;
    t=N;
    while(t1!=0)
    {
        count++;
        t1=t1/10;
    }
    do{
        rem=t%10;
        Product=1;
        for(i=1;i<=count;i++)
        {
            Product=Product*rem;
        }
        sum=sum+Product;
        t=t/10;
    }while(t!=0);
    if(N==sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not a armstrong number\n");
    }
    printf("No of digits:%d\n",count);
    printf("Sum:%d",sum);
}
