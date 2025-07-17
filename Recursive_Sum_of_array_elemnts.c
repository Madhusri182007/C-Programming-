#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int *a,int l,int i)
{
    if(i==l-1)
    {
        return *(a+i);
    }
    else{
        return *(a+i)+sum(a,l,i+1);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int res=sum(arr,n,0);
    printf("%d",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
