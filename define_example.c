#include <stdio.h>
//#define SQR(X) ((X)*(X))
//#define PRT(X) printf("계산 결과는 %d 입니다.\n", X)
#define SQR(X) printf(""#X"의 제곱은 %d 입니다. \n", X*X)

int main()
{
    int x = 5;

    SQR(x);
    SQR(3+4);
    
    
    /*int result;
    int x = 5; //num_01 = 15, num_02 = 7;

    result = SQR(10);//UB(num_01, num_02);
    PRT(result);
    result = SQR(x);
    PRT(result);
    result = SQR(x+3);
    PRT(result);
    */

    return 0;
}