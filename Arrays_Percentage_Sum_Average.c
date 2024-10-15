#include<stdio.h>
int main()
{
    int N,Sum=0,i; 
    float Average;
    scanf("%d",&N);
    int Percentage[N];
    for(i=0;i<N;i++)
    {
        printf("Enter Person %d:",i+1);
        scanf("%d",&Percentage[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("Person %d:%d\n",i+1,Percentage[i]);
        Sum=Sum+Percentage[i];
    }
    for(i=0;i<N;i++)
    {
        if(Percentage[i]>=50)
        {
            printf("Person %d:%d(Passed)\n",i+1,Percentage[i]);
        }
        else if(Percentage[i]<50)
        {
            printf("Person %d:%d(Failed)\n",i+1,Percentage[i]);
        }
    }
    Average=((float)Sum)/N-1;
    printf("Class Total:%d\n",Sum);
    printf("Class Average:%.2f\n",Average);
    return 0;
}
