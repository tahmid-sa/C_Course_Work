#include <stdio.h>

int main() {
    int a = 33;
    int b = 15;
    int result = 0;

    result = a + b;

    printf("c is %d\n", ++a);

    _Bool c = 0;
    _Bool d = 0;
    _Bool e;

    e = !(c || b);

    printf("%d", e);

    unsigned int one = 60; // 0011 1100
    unsigned int two = 13; // 0000 1101

    int bitResult = 0;

    bitResult = one >> 4;
    // 0011 1101

    printf("%d", bitResult);

    return 0;
}