#include<stdio.h>
int main()
{
    int Days,Hours,Minutes,Seconds,Time;
    scanf("%d",&Days);
    scanf("%d",&Hours);
    scanf("%d",&Minutes);
    scanf("%d",&Seconds);
    printf("Days:%d\n",Days);
    printf("Hours:%d\n",Hours);
    printf("Minutes:%d\n",Minutes);
    printf("Seconds:%d\n",Seconds);
    Time=Days*24*60*60+Hours*60*60+Minutes*60+Seconds;
    printf("Time on watch:%dsec",Time);
}
