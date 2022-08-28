/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0]))) 
// sizeof(array) / sizeof(array[0]) : 1 dimensional 배열의 원소의 크기를 측정 
#define INITIAL_BALANCE (100.00)

int main(void) {
    int i, low_rate;
    int num_years;
    int year;
    double value[7]; // double array size is 7.

    /*
    배열 value를 초기 상태로 만들기
    for (i = 0; i < sizeof(value) / sizeof(value[0]); ++i) {
    a[i] = 0;
    }
    */

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; ++i) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; ++year) {
        printf("%3d   ", year);
        for (i = 0; i < NUM_RATES; ++i) {
            value[i] += (low_rate + i) / 100.00 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}