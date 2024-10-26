#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,d,l,f,count=0;
    printf("Enter row and col size:");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(r1==r2 && c1==c2)
    {
        int a[r1][c1],b[r2][c2];
        printf("matrix 1");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("matrix 2");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                count=0;
                f=a[i][j];
                for(d=0;d<r2;d++)
                {
                    for(l=0;l<c2;l++)
                    {
                        if(f==b[d][l])
                        {
                            count++;
                            printf("Duplicate elements:%d\n",f);
                        }
                    }
                }
                if(count==0)
                {
                    printf("%d has no duplicate elements in matrix 2\n",f);
                }
            }
        }
    }
    else{
        printf("Rows and Col not match");
    }
}
