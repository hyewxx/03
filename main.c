#include <stdio.h>

int main(void) {
    char c;
    int i;

    printf("input a number :");     // 5를 입력하면 c에 문자 '5'가 입력, '5'는 아스키 코드 53
    scanf("%c", &c);

    i = c-48;
    printf("The input number is %i\n", i);

    return 0;
}