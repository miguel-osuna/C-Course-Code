/*Author: Miguel Osuna
  Purporse: Guess a Number Game
  Date: 1/2/19
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Variable definition
    time_t t;
    srand((unsigned)time(&t));

    int randNumber = rand() % 211;
    int tries = 5;
    int guessNumber = 0;

    printf("\nThis is a guessing game.");
    printf("\nI've chose a number between 0 and 20. Which is it?");

    while ( tries >= 0 )
    {
        //No more tries for the user
        if ( tries == 0)
        {
            printf("\nYou don't have anymore tries left, thanks for playing\n");

            break;
        }

        printf("\n\nYou have %d tries before losing", tries);

        //The user guesses the number
        printf("\nEnter your guess: ");
        scanf("%d", &guessNumber);

        //In case the user enters a number out of range
        while( guessNumber < 0 || guessNumber > 20)
        {
            printf("\nYour number is not valid, please enter another one: ");
            scanf("%d", &guessNumber);

            //If the number is inside the range, break out
            if( guessNumber > 0 && guessNumber < 20 )
            {
                //Break is just for exiting loops
                break;
            }
        }

        //Comparing numbers
        if ( guessNumber == randNumber )
        {
            printf("\n\nCongratulations, my number was: %d", randNumber);
            break;

        }

        else if ( guessNumber < randNumber )
        {
            printf("\nSorry, my number is higher than %d", guessNumber);
            tries--;
        }

        else if ( guessNumber > randNumber )
        {
            printf("\nSorry, my number is lower than %d", guessNumber);
            tries--;
        }
    }

    return 0;
}
