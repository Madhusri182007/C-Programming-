#include<stdio.h>
int main()
{
    int N,i,k,j;
    printf("Enter array size:");
    scanf("%d",&N);
    printf("enter k value:");
    scanf("%d",&k);
    int Num[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    for(j=0;j<N;j++)
    {
        if(Num[j]==k)
        {
            printf("K is presnt in array in index of %d",j);
            break;
        }
       
    }
    return 0;
}
