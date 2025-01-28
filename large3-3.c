
#include<stdio.h>
int main ()
{
    int a,s,d;
    scanf("%d%d%d",&a,&s,&d);
    if (a>s&&a>d)
    printf("large=%d",a);
    else if (s>a&&s>d)
    printf("large=%d",s);
    else if (d>a&&d>a)
    printf("large=%d",d);
    else
    printf("Numbers are equal");
}
