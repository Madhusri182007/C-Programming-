#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int i=0;
    char *C;
    char b[20];
    while(a[i]!='\0')
    {
        b[i]=a[i];
       i++;
    }
    printf("Copy of string:%s",b);
    C=strcpy(b,a);
    printf("\n%s",C);
}
