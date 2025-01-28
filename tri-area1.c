#include<stdio.h>
int main()
{
     double a,b,c,s,Area;
     printf("enter three value");
     scanf("%lf%lf%lf",&a,&b,&c);
     s=(a+b+c)/2;
     Area=sqrt(s*(s-a)*(s-b)-(s-c));
     printf("The area of triangle=%.2f",Area);
}
