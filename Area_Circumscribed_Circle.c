#include<stdio.h>
int main()
{
    float Side,Area,pi;
    printf("Enter pi value:");
    scanf("%f",&pi);
    printf("Enter Side of Square:");
    scanf("%f",&Side);
    Area=(pi*Side*Side)/2;
    printf("Area of Circumscribed Square:%.2f",Area);
    return 0;
}
