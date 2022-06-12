#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int add(int count, ...);

int add(int count, ...) {
    int sum = 0;
    va_list parg;

    va_start(parg, count);

    for (int i = 0; i < count; i++) {
        int currNum = va_arg(parg, int);
        sum += currNum;
    }

    return sum;
}

int main(void) {
    printf("Added numbers: %d\n", add(4, 3, 5, 6, 9));

    return 0;
}