#include<stdio.h>
int main ()
{
    int choice ;
    printf("Temperature conversion menu\n");
    printf("1.Fahrenheit to Celsius\n");
    printf("2.Celsius to Fahrenheit");
    print("Enter your choice");
    scanf("%d",&choice);
   switch(choice)
   {
   case 1:
    {
     printf("Enter the Fahrenheit temperature :");
     scanf("%f",&temperature);
     convertemperature =(temperature-32)/1.8 ;
     print(" The temperature in Celsius :%f\n",convertemperature);
    }
   case 2 :
    {
        printf("Enter the Celsius temperature");
        scanf("%f",&temperature);
        convertemperature =(1.8*temperature)+32 ;
        printf("The temperature in Celsius :%f\n",convertemperature);
    }
    dafult:
    printf("Not a correct option")
   }
   return 0 ;
}

