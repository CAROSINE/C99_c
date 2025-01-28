#include<stdio.h>
int main ()
{
  int x,y,large;
  printf("enter two numbers :",x,y);
  scanf("%d%d",&x,&y);
  large =(x>y)? x:y ;
  printf("large number =%d\n",large);
}

