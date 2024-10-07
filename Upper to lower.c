#include<stdio.h>
int main()
{
    char Character;
    scanf("%c",&Character);
    printf("The given character:%c\n",Character);
    printf("The Lower Case:%c",(int)Character+32);
}
