#include <stdio.h>

int main(void) {
    signed int i = 4151832098; // 0000 0001
    signed int w1 = 138; // 0000 0011

    int result = 0;

    result = w1 >> 2;

    printf("%d", result);

    return 0;
}