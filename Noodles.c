#include<stdio.h>
int main()
{
    int Stoves,Noddles,Time;
    scanf("%d",&Stoves);
    scanf("%d",&Time);
    printf("Number of stoves:%d\n",Stoves);
    printf("Time:%d\n",Time);
    Noddles=Stoves*Time;
    printf("Number of Noodles Prepared in Given minutes:%d",Noddles);
    return 0;
}
