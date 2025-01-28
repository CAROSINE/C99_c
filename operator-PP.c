#include<stdio.h>
int main ()
{
    double x,y;
    char op;
    printf("enter two number :");
    scanf("%lf%lf",&x,&y);
    printf("enter operator(+,-,*,/) :");
    scanf("%c",&op);
    switch(op)
    {
    case'+' :
        {
            printf("%lf+%lf=%lf\n",x,y,x+y);
            break;
        }
    case '-':
        {
            printf("%lf-%lf=%lf\n",x,y,x-y);
            break ;
        }
    case '*' :
        {
            printf("%lf*%lf=%lf\n",x,y,x*y);
            break ;
        }
    case '/':
        {
            printf("%lf/%lf=%lf\n",x,y,x/y);
            break ;
        }
    default :
        printf("Invalid operator\n");
    }
}

