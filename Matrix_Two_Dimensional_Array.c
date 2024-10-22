#include<stdio.h>
int main()
{
    int R1,C1,R2,C2,i,j;
    printf("Enter number of rows:");
    scanf("%d %d %d %d",&R1,&C1,&R2,&C2);
    int a[R1][C1],b[R2][C2];
    printf("Enter Matrix1:\n");
    for( i=0;i<R1;i++)
    {
        for( j=0;j<C1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter Matrix2:\n");
    for(i=0;i<R2;i++)
    {
        for(j=0;j<C2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("1st Matrix:\n");
      for( i=0;i<R1;i++)
    {
        for( j=0;j<C1;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix:\n");
    for(i=0;i<R2;i++)
    {
        for(j=0;j<C2;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
