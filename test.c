#include <stdio.h>
 
int main(void) {
    char name[100];
    char name1[100];
    printf("이름을 입력해 주세요. fgets  ");
    fgets(name, 100, stdin);
    printf("이름을 입력해 주세요. fgets  ");
    fgets(name1, 100, stdin);
 
    printf("당신의 이름은 %s입니다. using gets variable name\n", name);
    printf("당신의 이름은 %s입니다. using scanf variable name1\n", name1);
    return 0;
}
