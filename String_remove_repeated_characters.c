#include<stdio.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int i=0,j=0,k=0,l=0;
    char b[20];
    while(a[i]!='\0')
    {
        i++;
        l++;
    }
    for(i=0;i<=l-2;i++)
    {
        if(a[i]!='$')
        {
        for(j=i+1;j<=l-1;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
            }
        }
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!='$')
        {
            printf("%c",a[i]);
        }
    }
}
