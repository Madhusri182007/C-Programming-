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
   int i=0;
    int l1=0,l2=0;
    while(a[i]!='\0')
    {
        l1++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
       l2++;
      i++;
    }
    if(l1==l2)
    {
        i=0;
        int e=0;
        while(i<l1)
        {
           if(a[i]!=b[i])
           {
               e=-1;
               break;
           }
           i++;
        }
        if(e==0)
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Strings are not equal");
        }
    }
    else
    {
        printf("String lengths are not equal");
    }
}
