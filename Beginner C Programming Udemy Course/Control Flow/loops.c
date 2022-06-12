#include <stdio.h>

int main() {
    unsigned long long sum = 0LL;
    unsigned int count = 3;
    unsigned int i;

    for (i = 1; i <= count; sum += ++i) {}

    printf("%u %d", i, sum);

    /*
    for (int count = 1; count < 10; count++) {
        printf("%d", count);
    }
    */

    return 0;
}