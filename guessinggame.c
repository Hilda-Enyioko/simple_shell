#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is a guessing game
 * Description: this code allows users to guess a number within the range 0-10
 *              if the user guesses the right number, he wins.
 *              else, the user loses.
 * Return: 0
 */

int main(void)
{
int randomNumber, guessedNumber;

srand(time(NULL));
randomNumber = rand();
randomNumber %= 11;

printf("%d\n", randomNumber);

printf("Welcome to my Guessing Game!\n");
printf("Guess a number between 0-10: ");
scanf("%d", &guessedNumber);

if (guessedNumber == randomNumber)
printf("Yay! You Win\n");
else
{
printf("Sorry, You Lose\n");
}
return (0);
}
