#include <stdlib.h>
#include <stdio.h>

void up_and_down(int);

int factorial(int n) {
    int result = 0;

    if (n == 0) {
        result = 1;
    }
    else {
        result = n * factorial(n - 1);
    }

    return result;
}

void up_and_down(int n) {
    printf("level %d: n location %p\n", n, &n);

    if (n < 4) {
        up_and_down(n + 1);
    }
    printf("LEVEL %d: n location %p\n", n, &n);
}

int main(void) {
    int j;

    for (j = 0; j < 8; ++j) {
        printf("%d! factorial = %d\n", j, factorial(j));
    }

    printf("\n");

    up_and_down(1);

    return 0;
}