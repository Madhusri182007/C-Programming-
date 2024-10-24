#include<stdio.h>
int main()
{
    int R1,C1,Iden=0,Zero=0;
    printf("Enetr Rows and Columns:");
    scanf("%d %d",&R1,&C1);
    int Mat[R1][C1];
    if(R1==C1)
    {
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
           if(i==j )
           {
               if(Mat[i][j]==1)
               {
                   Iden++;
               }
           }
           else if(i!=j)
           {
               if(Mat[i][j]==0)
               {
                   Zero++;
               }
           }
        }
        printf("\n");
    }
    if(R1==Iden && Zero==R1*C1-Iden)
    {
        printf("Identity Matrix");
    }
    else 
    {
        printf("Not Identity Matrix");
    }
}
}
