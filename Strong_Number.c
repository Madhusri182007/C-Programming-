#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
    int t=n;
    int sum=0,p=1;
    int c=0;
    while(n!=0)
    {
        p=1;
        int rem=n%10;
        for(int i=1;i<=rem;i++)
        {
            p=p*i;
        }
        sum=sum+p;
        c++;
        n=n/10;
    }
   if(sum==t)
   {
       printf("Yes it is a Strong number");
   }
   else
   {
       printf("No it is not a Strong number");
   }
    return 0;
}
