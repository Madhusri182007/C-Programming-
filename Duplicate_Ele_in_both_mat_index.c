#include<stdio.h>
int main()
{
    int R1,C1,R2,C2,i,j,Count;
    printf("Enter row and col size:");
    scanf("%d %d %d %d",&R1,&C1,&R2,&C2);
    if(R1==R2 && C1==C2)
    {
        int a1[R1][C1],a2[R2][C2];
        for(i=0;i<R1;i++)
        {
            for(j=0;j<C1;j++)
            {
                scanf("%d",&a1[i][j]);
            }
        }
         for(i=0;i<R2;i++)
        {
            for(j=0;j<C2;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        for(i=0;i<R1;i++)
        {
            Count=0;
            for(j=0;j<C1;j++)
            {
                if(a1[i][j]==a2[i][j])
                {
                    Count++;
                    printf("%d \n",a1[i][j]);
                }
            }

        }
    }
}
