#include<stdio.h>
int main()
{
    int N,i,j,k;
    printf("Enter the number of students:");
    scanf("%d",&N);
    int Marks[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Marks[i]);
    }
    int High=Marks[0];
    int Low=Marks[0];
    for( j=1;j<N;j++)
    {
        if(Marks[j]>High)
        {
            High=Marks[j];
        }
    }
     for( k=1;k<N;k++)
    {
        if(Marks[i]<Low)
        {
            Low=Marks[i];
        }
    }
