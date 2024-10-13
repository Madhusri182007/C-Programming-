#include<stdio.h>
int main()
{
    char Character;
    printf("Enter the character:");
    scanf("%c",&Character);
    if(Character>=48 && Character<=57 )
    {
        printf("Digits");
    }
    else if(Character>=65 && Character<=90)
    {
        printf("Alphabets");
    }
    else if( Character>=97 && Character<=122)
    {
        printf("alphabets");
    }
    
    else if(Character>=32 || Character<=47 ||Character>=58 ||Character<=64 ||Character>=91 ||Character<=96||Character>=123 ||Character<=126)
    
    {
        printf("Special Characters");
    }
    return 0;
}
