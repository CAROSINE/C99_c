#include<stdio.h>
int main ()
{
    int num1=0,num2=1,num3,num;
    printf("enter number=");
    scanf("%d",&num);
    printf("%d\n%d\n",num1,num2);
    for(int i=2;i<=num;++i)
    {
    num3=num2+num1;
    num1=num2;
    num2=num3;
    printf("%d\n",num3);
    }
    return 0 ;
}
