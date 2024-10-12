#include<stdio.h>
int main()
{
    int Original_Price,Net_Price,GST;
    printf("Enter Original price:");
    scanf("%d",&Original_Price);
    printf("Enter Net Price:");
    scanf("%d",&Net_Price);
    GST=Original_Price-Net_Price;
    printf("GST=%dPercent",GST);
    return 0;
}
