/* while문을 활용해 제곱수 표를 출력하라 Prints a table of squares using a while statements. */
/* Prints a table of squares using a for statements. */

#include <stdio.h>

int main(void)
{
    int i;
    int n;

    printf("본 프로그램은 제곱수 표를 출력합니다.\n");
    printf("본 표의 크기를 결정해주세요:  ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        ++i;
    }

    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i=1; i <= n; ++i){
        printf("%10d%10d\n", i, i * i);
        
    }    

    return 0;
}