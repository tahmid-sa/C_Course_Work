#include <stdio.h>
#include <stdlib.h>

int recursiveAdd(int n2) {
    if (n2 == 1) {
        return 1;
    }

    return (recursiveAdd(n2 - 1) + n2);
}

int gcf(int a, int b) {
    while (a != b) {
        if (a > b) {
            return gcf(a - b, b);
        }
        else {
            return gcf(a, b - a);
        }
    }

    return a;
}

int main(void) {
    int n1 = 1, n2 = 5;
    printf("%d\n", recursiveAdd(n2));

    n1 = 10, n2 = 50;
    printf("%d\n", gcf(n1, n2));

    return 0;
}