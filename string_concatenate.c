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
    char c[l1+l2];
    int i=0;
    int j=0;
    while(a[i]!='\0')
    {
        c[j]=a[i];
        i++;
        j++;
    }
    i=0;
    while(b[i]!='\0')
    {
        c[j]=b[i];
        i++;
        j++;
    }
    c[j]='\0';
   printf("%s",c);
   char *d;
   d=strcat(a,b);
   printf("\n%s",d);
    return 0;
}
