#include<stdio.h>
int main ()
{
    double a,b,c,d,X1,X2;
    printf("enter a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    X1=(-b+d)/2*a;
    X2=(-b-d)/2*a;
    printf("X1=%lf\n",X1);
    printf("X2=%lf",X2);
}
