#include<stdio.h>
int main ()
{
  char lower ,upper ;
  printf("enter any lowercase letter :");
  scanf("%c",&lower);
  upper=toupper(lower);
  printf("Uppercase letter=%c ",upper);
}
