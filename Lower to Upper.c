#include<stdio.h>
int main()
{
    char Character1,Character2;
    scanf("%c",&Character1);
    scanf("%c",&Character2);
    printf("The given character:%c%c\n",Character1,Character2);
    printf("The Lower Case:%c%c",(int)Character1-32,(int)Character2-32);
}
