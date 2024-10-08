#include<stdio.h>
int main()
{
    int n,i,Sum=0,count=0,Average;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count++;
        printf("Natural numbers:%d\n",i);
        Sum=Sum+i;
    }
    Average=Sum/count;
    printf("Average=%d\n",Average);
    printf("Sum=%d\n",Sum);
}
