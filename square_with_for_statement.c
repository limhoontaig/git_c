/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
    double i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%lf", &n);

    for (i = 1; i <= n; ++i) {
        printf("%10ld%10ld\n", i, i * i);
    }

    return 0;
}
