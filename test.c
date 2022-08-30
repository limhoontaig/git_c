#include <stdio.h>

int getNumbers(void);

int main (void){
    printf("Hello World!\n");
    char command = '\0';
    int t = 0;
    do {
        t = getNumbers();
        printf("Your entered number is %d.\n", t);
        printf("Do you want to play one more time: ");
        scanf("%c", &command);
        printf("\n");
    } while (command == 'Y' || command == 'y');

    return 0;
}

int getNumbers(void) {
    int temp = 0;
    printf("Input your number: ");
    scanf("%d", &temp);
    printf("Input number is %d.\n", temp);

    return temp;
}