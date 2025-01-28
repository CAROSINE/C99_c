#include<stdio.h>
int main ()
{
    int a=10; //local variable
    printf("*Inside the main function a=%d \n",a);
    display();
}
void display()
{
    printf("Inside the display function a=%d \n",a);
}
