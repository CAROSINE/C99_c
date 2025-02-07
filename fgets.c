#include<stdio.h>
int main()
{
    char name[50];
    printf("enter your name:");
    fgets(name, sizeof(name), stdin);
    printf("Hello ");
    puts(name);
}
