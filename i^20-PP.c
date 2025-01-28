#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<20;i++)
    continue;//bypass
    printf("%d\n",i);
    if(i==10)
    break;//loop terminate
}
