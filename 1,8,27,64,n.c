#include<stdio.h>
int main ()
{
    int n,i ;
    printf("enter number=");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
    int x=pow(i,3);
    printf("%d\n",x);
    }
    return 0;
}
