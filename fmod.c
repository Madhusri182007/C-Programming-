#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("enter two floating integer:");
    scanf("%f %f",&a,&b);
    c=fmod(a,b);
    printf("%f",c);
    return 0;
}
