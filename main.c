#include <stdio.h>

int main(void) {
    char c;
    int i;

    printf("input a character : ");
    scanf("%c", &c);

    i = c + 1;
    printf("The next character of %c (%d) : %c", c, c, i);

    return 0;
}