#include<stdio.h>
int main ()
{
    int i;
    for(i=1;i<20;i++)
    {
     if(i%3==0)
     continue;//bypass
     printf("%d\n",i);
     if(i==20)
    break;
    }
}

