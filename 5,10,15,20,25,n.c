#include<stdio.h>
int main ()
{
    int n,i;
    printf("enter any number =");
    scanf("%d",&n);
    for(int i=5;i<=n;i+=5)
    {
    printf("%d\n",i);
    }
    return 0;
}
