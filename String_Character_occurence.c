#include<stdio.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int Count=1,t;
    t=a[0];
   int  i=1;
    while(a[i]!='\0')
    {
        if(a[i]==t)
        {
            Count++;
        }
        else
        {
            printf("%c%d",t,Count);
            t=a[i];
            Count=1;
        }
        i++;
    }
}
