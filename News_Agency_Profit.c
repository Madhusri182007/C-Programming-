#include<stdio.h>
int main()
{
    int Copies_Sold,Copies_Actual_price,Copies_Sold_price,Agency_Expense,Profit;
    Copies_Sold=1000;
    Copies_Actual_price=1;
    Copies_Sold_price=2;
    Agency_Expense=100;
    Profit=(Copies_Sold*Copies_Sold_price)-(Copies_Sold*Copies_Actual_price)-Agency_Expense;
    printf("Number of Copies Sold:%d\n",Copies_Sold)   ;
    printf("Cost of each copy:%d\n",Copies_Sold_price);
    printf("Cost spent by agency on each newspaper:%d\n",Copies_Actual_price);
    printf("The Obtained Profit:%d\n",Profit);
    return 0;
}
