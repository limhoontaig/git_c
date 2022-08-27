/* Tenary Operator Example */

#include <stdio.h>

int main(void) 
{
    int i;
    int j;
    int k;

    i = 1;
    j = 2;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    k = i > j ? i : j; // k vlaue is 2
    printf("k = i > j ? i : j; : %d\n", k);
    k = (i >= 0 ? i : 0) + j;
    
    printf("k = (i >= 0 ? i : 0) + j; : %d\n\n", k);

    printf("\"%%d\\n, i > j ? i : j\" : %d\n", i > j ? i : j);

    return 0;

}
