#include<stdio.h>
int main()
{
    int Radius;
    float Circumference,Pi;
    printf("Enter Radius: ");
    scanf("%d",&Radius);
    printf("Enter Pi value:");
    scanf("%f",&Pi);
    Circumference=2*Pi*Radius;
    printf("Circumference of Circle:%.2f",Circumference);
    return 0;
}
