#include <stdio.h>

void byRef(int *val) {
    *val = 5;
    return;
}

int main(void) {

    int val = 3;
    byRef(&val);

    printf("%d", val);

    return 0;
}