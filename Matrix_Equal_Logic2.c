#include<stdio.h>
int main()
{
    int R1,C1,R2,C2,i,j;
    printf("Enter number of rows:");
    scanf("%d %d %d %d",&R1,&C1,&R2,&C2);
    int a[R1][C1],b[R2][C2];
    if(R1==R2 && C2==C1)
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
      int Count=0;
      for(i=0;i<R1;i++)
      {
          for(j=0;j<C2;j++)
          {
              if(a[i][j]!=b[i][j])
              {
                  Count++;
                  break;
              }
          }
      }
      if(Count==0)
      {
          printf("Matrix equal");
      }
      else
      {
          printf("Matrix not equal");
      }
    }
    else
    {
        printf("Given matrix not equal ");
    }
    
    return 0;
}
