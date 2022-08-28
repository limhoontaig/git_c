/* Reverse a series of numbers */
/* Reverse a series of numbers using a variable-length array */

# include <stdio.h>

// # define N (3)

int main(void) {
    // int a[N] = {0,} ;
    int i;
    int reverse_count;

    printf("How many numbers do you want to reverse?: ");
    scanf("%d", &reverse_count);

    int numbers[reverse_count]; 

    printf("Enter %d numbers: ", reverse_count);
    for (i = 0; i < reverse_count; ++i) {
        scanf("%d", &numbers[i]);
    }

    printf("In reverse order: ");
    for (i = reverse_count - 1; i >= 0; --i) {
        printf(" %d", numbers[i]);
    }
    printf("\n");

    return 0;
    
}