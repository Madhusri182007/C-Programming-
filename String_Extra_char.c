#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    scanf("%s",a);
    scanf("%s",b);
    int i=0,l=0,j=0,l1=0,C=0;
    while(a[i]!='\0')
    {
        l++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        l1++;
        i++;
    }
    if(l==l1)
    {
        for(i=0;i<l;i++)
        {
            C=0;
            for(j=0;j<l;j++)
            {
                if(b[i]==a[j])
                {
                    C=1;
                }
            }
            if(C!=1)
            {
                printf("%c ",b[i]);
            }
        }
    }
    else
    {
        printf("String lengths are not equal");
    }
}
