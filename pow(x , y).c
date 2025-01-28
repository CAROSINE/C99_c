#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    double result = pow (x,y);
    printf("%.2lf",result);
}
