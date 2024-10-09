#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d",&A,&B,&C);
    if(A+B>C && A+C>B && B+C>A)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Change some values");
    }
    return 0;
}
