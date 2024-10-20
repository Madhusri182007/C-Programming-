#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int row,col;
    for(row=1;row<=N;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
