#include<stdio.h>
int main()
{
    int S,N,Pos=0,Neg=0,i=1;
    printf("Enter how many values do you want to read:");
    scanf("%d",&S);
    printf("Enter %d values:\n",S);
    while(i<=S)
    {
        scanf("%d ",&N);
        if(N>0)
        {
            Pos++;
            }
            else if(N<0)
            {
                Neg++;
            }
            i++;
    }
    printf("\nNumber of Positive numvers:%d",Pos);
    printf("\nNumber of Negative numbers:%d",Neg);
}
