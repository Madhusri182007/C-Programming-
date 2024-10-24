#include<stdio.h>
int main()
{
    int R1,C1;
    printf("Enetr Rows and Columns:");
    scanf("%d %d",&R1,&C1);
    int Mat[R1][C1];
    printf("Enter Matrix:\n");
    for(int row=0;row<R1;row++)
    {
        for(int col=0;col<C1;col++)
        {
            scanf("%d",&Mat[row][col]);
        }
    }
    for(int i=0;i<R1;i++)
    {
        for(int j=0;j<C1;j++)
        {
           if(i==j) 
           {
              printf("%d ",Mat[i][j]);
           }
           if(i>j)
           {
                printf("%d ",Mat[j][i]);
           }
           if(i<j)
           {
               printf("%d ",Mat[j][i]);
           }
        }
        printf("\n");
    }
}
