#include<stdio.h>
int main ()
{
    int long long N,Sum,i,c,p=2;
    printf("Enter the value of N=");
    scanf("%lld",&N);
    Sum=0;
    for (i=1;i<=N;i++)
    c=pow(i,i+1);
    Sum=Sum+c+p;
    printf("The summation of the first 3 numbers = %lld",Sum);
    return 0 ;
}
