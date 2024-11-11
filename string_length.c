#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int i=0;
    int C=0;
    while(a[i]!='\0')
    {
        
       i++;
    }
    printf("Length of string:%d",i);
    C=strlen(a);
    printf("\n%d",C);
}
