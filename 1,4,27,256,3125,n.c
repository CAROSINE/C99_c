#include<stdio.h>
int main ()
{
int n ;
printf("enter number=");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    int c=pow(i,i);
    printf("%d\n",c);
}
return 0;
} 