#include <stdio.h>

static int summed = 0;

int sum(int num) {
    summed += num;
}

int main(void) {
    printf("%d ", sum(25));
    printf("%d ", sum(15));
    printf("%d ", sum(30));

    return 0;
}