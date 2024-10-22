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
       }
          printf("Enter Matrix2:\n");
        for(i=0;i<R2;i++)
       {
        for(j=0;j<C2;j++)
        {
            scanf("%d",&b[i][j]);
        }
      }
      int Sum_1=0;
      for(i=0;i<R1;i++)
      {
          for(j=0;j<C1;j++)
          {
              if(i==j)
              {
                Sum_1=Sum_1+a[i][j];
              }
          }
      }
     printf("Sum of diagonals of Matrix1:%d\n",Sum_1);
        int Sum_2=0;
        for(i=0;i<R2;i++)
        {
            for(j=0;j<C2;j++)
            {
                if(i==j)
                {
                    Sum_2=Sum_2+b[i][j];
                }
            }
        }
        printf("Sum of diagonals of Matrix2:%d\n",Sum_2);
    
    return 0;
}
