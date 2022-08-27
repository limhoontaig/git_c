/* 날짜를 미국 법적 형식으로 출력한다 */

#include <assert.h> /* 역자 추가 */
#include <stdio.h>

int main(void)
{
    int month;
    int day;
    int year;

    printf("날짜를 입력해주세요 (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Dated this %d", day);
    switch (day) {
    case 1:
        /* intentional fallthrough */
    case 21:
        /* intentional fallthrough */
    case 31:
        printf("st");
        break;
    case 2:
        /* intentional fallthrough */
    case 22:
        printf("nd");
        break;
    case 3:
        /* intentional fallthrough */
    case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }
    printf(" day of ");

    switch (month) {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    /* 역자 추가 코드 */
    default:
        assert(0);
        break;
    }

    printf(", 20%.2d.\n", year);

    return 0;
}
