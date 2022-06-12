#include <stdio.h>
#include <stdlib.h>

#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

int main(void) {
    printf("square = %d\n", square(10));
    printf("cube = %d\n", cube(10));

    return 0;
}