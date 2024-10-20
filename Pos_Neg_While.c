#include<stdio.h>
int main()
{
    int S,E,Pos=0,Neg=0;
    printf("Enter starting number:");
    scanf("%d",&S);
    printf("Enter Ending number:");
    scanf("%d",&E);
    printf("\n Negative numbers:");
    while(S<=E)
    {
        if(S<0)
        {
            printf("\n %d",S);
            Neg++;
        }
        S++;
    }
    printf("\n Positve numbers:");
    S=0;
    while(S<=E)
    {
        if(S>0)
        {
            printf("\n %d",S);
            Pos++;
        }
        S++;
    }
    printf("\nNumber of Positive numvers:%d",Pos);
    printf("\nNumber of Negative numbers:%d",Neg);
}
