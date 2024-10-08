#include<stdio.h>
int main()
{
    int N,i,Odd,Even,rem;
    printf("Enter the digit:");
    scanf("%d",&N);
    while(N>0)
    {
        rem=N%10;
        if(rem%2==0)
        {
            Even++;
        }
        else if(rem%2==1)
        {
            Odd++;
        }
        N=N/10;
    }
    printf("Number of odd numbers:%d\n",Odd);
    printf("Number of Even numbers:%d\n",Even);
}
