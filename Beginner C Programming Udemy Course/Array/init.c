#include <stdio.h>
#define MONTHS 12

int main() {
    int month[MONTHS] = {31, 28, [4] = 31, 24, 54, [1] = 21};
    int i;

    for (i = 0; i < MONTHS; i++) {
        printf("%2d %d\n", i + 1, month[i]);
    }

    return 0;
}