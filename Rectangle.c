#include<stdio.h>
int main()
{
    int Length_1,Length_2,Breadth_1,Breadth_2;
    printf("Enter rectangle four sides of lenght:");
    scanf("%d %d %d %d",&Length_1,&Length_2,&Breadth_1,&Breadth_2);
    if(Length_1==Length_2 && Breadth_1==Breadth_2)
    {
        printf("Rectangle is Formed");
    }
    else
    {
        printf("Rectangle is not Formed");
    }
    return 0;
}
