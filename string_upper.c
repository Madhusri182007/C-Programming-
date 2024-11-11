#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter string 1:");
    scanf("%s",a);
    int i=0;
    char C[20];
    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
           C[i]=(char)((int)a[i]-32 );
        }
        i++;
    }
    printf("%s",C);
    return 0;
}
