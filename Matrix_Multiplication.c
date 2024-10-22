#include<stdio.h>
int main()
{
    int R1,C1,R2,C2,i,j;
    printf("Enter number of rows:");
    scanf("%d %d %d %d",&R1,&C1,&R2,&C2);
    int a[R1][C1],b[R2][C2];
    if(R1==C2 && R2==C1)
    {
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
      int Mul[R1][C2];
      for(i=0;i<R1;i++)
      {
          for(j=0;j<C2;j++)
          {
              Mul[i][j]=0;
              for(int k=0;k<C1;k++)
              {
              Mul[i][j]=Mul[i][j]+a[i][j]*b[i][j];
              }
          }
      }
      printf("Multiplication matrix:\n");
      for(i=0;i<R1;i++)
      {
          for(j=0;j<C2;j++)
          {
              printf(" %d ",Mul[i][j]);
          }
          printf("\n");
      }
    }
    else
    {
        printf("Given matrix not matched ");
    }
    
    return 0;
}
