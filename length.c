/* measured a message length */

#include <stdio.h>

int main (void)
{
    char ch;
    int message_length = 0;

    printf("Enter a message: ");
    ch = getchar();
    printf("Your message was %c.\n", &ch);
    while (ch != '\n') {
        ++message_length;
        ch = getchar();

    }
    printf("Your message was %d charcter(s) long.\n", message_length);

    message_length = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        printf("Your message was %c.\n", &ch);
        ++message_length;

    }
    printf("Your message was %d charcter(s) long.\n", message_length);

    return 0;

}