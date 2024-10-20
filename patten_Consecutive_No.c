#include<stdio.h>
int main()
{
    int N,row,col,t=1;
    scanf("%d",&N);
    for(row=0;row<N;row++)
    {
        for(col=0;col<=row;col++)
        {
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
}
