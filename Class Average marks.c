#include<stdio.h>
int main()
{
    int Students,Marks,Sum,Average,i;
    printf("Enter The number of Students:");
    scanf("%d",&Students);
    for(i=1;i<=Students;i++)
    {
     printf("Student %d:",i);
     scanf("%d",&Marks);
     Sum=Sum+Marks;
    }
    printf("Total class marks:%d\n",Sum);
    Average=Sum/Students;
    printf("Class Average :%d\n",Average);
}
