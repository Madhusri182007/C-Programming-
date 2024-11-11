#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter string 1:");
    scanf("%s",a);
    char b[20];
    printf("Enter string 2:");
    scanf("%s",b);
    int l1=0,l2=0;
    l1=strlen(a);
    l2=strlen(b);
    int c;
    if(l1==l2)
    {
        c=strcmp(a,b);
        if(c==0)
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Strings are not equal");
        }
    }
    
}
