
#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("Large=%d\n",num1);
    else if (num2>num1)
        printf("Large=%d\n");
    else
        printf("Invalid number");
}
