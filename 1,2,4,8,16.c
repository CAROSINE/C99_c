#include<stdio.h>
int main ()
{
    int n,i;
    printf("ENTER ANY NUMBER :");
    scanf("%d",&n);
    for(int i=1;i<=n;i*=2)
    {
    printf("%d\n",i);
    }
    return 0 ;
}
