
#include<stdio.h>
int main ()
{
    int marks ;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>=80)
        printf("A+");
    if(marks>=70)
        printf("A");
    if(marks>=60)
        printf("A-");
    if(marks>=50)
        printf("B");
    if(marks>=40)
        printf("C");
    if(marks>=33)
        printf("D");
 else
        printf("Fail");
}
