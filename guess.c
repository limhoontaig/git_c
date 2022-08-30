/* Game of guessing number for the randomized number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER (100)

/* function format */
void initialize_number_generator(void);
int get_new_secret_number(void);
void read_guesses(int secret_number);

int main(void) {
    char command = '\0';
    int secret_number = 0;

    printf("Guess the randomized number between 1 to 100!!\n\n", MAX_NUMBER);
    initialize_number_generator();
    do {
        secret_number = get_new_secret_number();
        printf("Make the secret numbey by computer, guess!.\n");
        read_guesses(secret_number);
        printf("Do you need to play one more time? (Y/N) ");
        scanf("%c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');

    return 0;
}

/**********************************************************
 * initialize_number_generator: initialize the ramdomizer *
 *                              on current time.          *
 **********************************************************/
void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}

/**********************************************************
 * get_new_secret_number: return the randomized number    *
 *                        between 1 to 100.               *
 **********************************************************/
int get_new_secret_number(void)
{
    return rand() % MAX_NUMBER + 1;
}

/**********************************************************
 * read_guesses: Return repeatedly smaller than, bigger   *
 *               than compare between the randomized      *
 *               number and input number.                 *
 *               If two numbers are equal, to print the   *
 *               input times and return the main function.*
 **********************************************************/
void read_guesses(int secret_number)
{
    int guess = 0;
    int num_guesses = 0;

    for (;;) {
        ++num_guesses;
        printf("Try the input your gussing number?: ");
        scanf("%d", &guess);
        if (guess == secret_number) {
            printf("Answer the randomized number by %d times try!\n\n", num_guesses);
            return;
        } else if (guess < secret_number) {
            printf("Too small; retry.\n");
        } else {
            printf("Too big; retry.\n");
        }
    }
}