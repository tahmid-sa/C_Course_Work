#include <stdio.h>
#include <stdlib.h>

union number {
    int x;
    double y;
};

union mixed {
    char c;
    float f;
    int i;
};

void foo(union number n) {
    union number x = n;
}

int main(void) {
    //nion number value = {0};

    union number x;
    union number *y = &x;

    /*
    value.x = 100;
    printf("%d\n", value.x);
    printf("%f\n", value.y);

    //value.y = 100;
    printf("%d\n", value.x);
    printf("%f\n", value.y);
    */

    return 0;
}