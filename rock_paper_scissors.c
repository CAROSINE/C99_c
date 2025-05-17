#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int user, computer;
    char *options[] = {"Rock", "Paper", "Scissors"};

    
    srand(time(0));

    printf("Enter your choice:\n");
    printf("0: Rock\n1: Paper\n2: Scissors\n");
    printf("Your move: ");
    scanf("%d", &user);

   
    if (user < 0 || user > 2) 
    {
        printf("Invalid choice!\n");
        return 1;
    }

    computer = rand() % 3;

    printf("You chose: %s\n", options[user]);
    printf("Computer chose: %s\n", options[computer]);

  
    if (user == computer) 
    {
        printf("Result: It's a Draw!\n");
    } 
    else if ((user == 0 && computer == 2) ||
               (user == 1 && computer == 0) ||
               (user == 2 && computer == 1)) 
    {
        printf("Result: You Win!\n");
    } 
    else
    {
        printf("Result: You Lose!\n");
    }

    return 0;
}
