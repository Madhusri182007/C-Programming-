#include<stdio.h>
#include<string.h>
int pal(char *str,int end,int st)
{
    if(st>=end)
    {
        return 1;
    }
    else
    {
        if(*(str+st)!=*(str+(end)))
        {
            return 0;
        }
    } return  pal(str,end--,st++);
}
int main()
{
    char s[20];
    scanf("%s",s);
    int l=strlen(s);
    int res=pal(s,0,l-1);
    if(res==1)
    {
        printf("Palindrome");
    }
    else if(res==0)
    {
        printf("Not a palindrome");
    }
}
