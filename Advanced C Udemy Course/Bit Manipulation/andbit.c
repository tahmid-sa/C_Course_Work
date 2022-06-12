#include <stdio.h>

int main(void) {
    short int w1 = 154;
    short int w2 = 61;
    short int result = 0;

    // 00000010
    // 11111101
    // 00000011
    // 11111101

    // 10011010 = 154
    // 01100101 = two's compl.

    result = ~(w1);
    printf("%d", result);

    /*
    temp = w1;
    w1 = w2;
    w2 = temp;

    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    */

    return 0;
}