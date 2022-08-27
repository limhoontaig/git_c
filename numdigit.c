/* 한 정수의 자릿수를 계산한다 */

#include <stdio.h>

int main (void) {
    int digits = 0;
    int n;

    printf("음수가 아닌 정수를 입력하시오: ");
    scanf("%d", &n);

    do {
        n /= 10;
        ++digits;        
    } while (n > 0);

    printf("do statements digits is %d. \n", digits);

    printf("음수가 아닌 정수를 입력하시오: ");
    scanf("%d", &n);

    digits = 0;

    while (n > 0) {
        n /= 10;
        ++digits;
    }

    printf("while statements digits is %d. \n", digits);

    return 0;


}