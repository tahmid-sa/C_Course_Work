#include <stdio.h>
#include <stdlib.h>

#define sum(x, y) x + y

int main(void) {
    int a = 5;
    int b = 6;

    printf("sum = %d", sum(a, b));

    return 0;
}