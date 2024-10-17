#include<stdio.h>
int main()
{
    int N,i,j,sum=0;
    float Average=0;
    printf("Enter the number of students:");
    scanf("%d",&N);
    int Marks[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Marks[i]);
        sum=sum+Marks[i];
    }
    int High=Marks[0];
    int Low=Marks[0];
    for( j=1;j<N;j++)
    {
        if(Marks[j]>High)
        {
            High=Marks[j];
        }
         else if(Marks[j]<Low)
        {
            Low=Marks[j];
        }
    }
    for(i=0;i<N;i++)
    {
        if(Marks[i]==High)
        {
            printf("Roll No:%d is the highest mark\n",i+1);
        }
        else if(Marks[i]==Low)
        {
            printf("Roll No:%d is the lowest mark\n",i+1);
        }
    }
    Average=sum/N;
    printf("Highest Mark:%d\n",High);
    printf("Lowest Mark:%d\n",Low);
    printf("Class Average:%.2f\n",Average);
    return 0;
}
