#include<stdio.h>
#define pi 3.1416
int main ()
{
     float radius,Area ;
     printf("Enter the size of the radius =");
     scanf("%f",&radius );
     Area = pi*radius*radius ;
     printf("The area of Circle = %.3f",Area);
     return 0 ;
}
