#include <stdio.h>

int main(){
   int num01 = 1234;
   double num02 = 3.14;
   int * p_num01 = &num01;
   double *p_num02 = &num02;
   printf("\n");
   printf("The size of pointer is %d\n", sizeof(p_num01));
   printf("The number of num01 is %d\n", num01);
   printf("The address value pointing out p_num01 is %#x. \n", p_num01);
   printf("The address value pointing out p_num02 is %#x. \n", p_num02);
   printf("포인터 p_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *p_num01);
   printf("포인터 p_num02가 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *p_num02);

   printf("\n");
   return 0;
}
