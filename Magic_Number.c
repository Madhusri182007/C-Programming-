#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
    int t=n;
    int sum=0;
    int c=0;
    while(t>=10  && c!=1)
    {
         c=0;
        sum=0;
        n=t;
    while(n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        c++;
        n=n/10;
    }
    t=sum;
    }
   if(sum==1)
   {
       printf("Yes it is a Magic number");
   }
   else{
       printf("No it is not a magic number");
   }
    return 0;
}
