#include<stdio.h>
int main()
{
    int N,row,col;
    char t;
    scanf("%d",&N);
    for(row=0;row<N;row++)
    {
        t='A';
        for(col=0;col<=row;col++)
        {
            printf("%c ",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}
