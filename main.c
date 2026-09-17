#include <stdio.h>

int main(void) {
    int i, j;

    printf("input a numerator : ");
    scanf("%d", &i);

    printf("input a denominator : ");
    scanf("%d", &j);

    printf("Dividing result : %f\n", (float)i/j);

    return 0;
}