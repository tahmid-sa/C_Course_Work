#include <stdio.h>
#include <stdlib.h>

void squareNum(int *num);

void squareNum(int *num) {
    int numInitial = *num;

    for (int i = 0; i < numInitial; i++) {
        *num = *num * numInitial;
    }

    //printf("%d", *num);
}

int main(void) {
    int *num = (int *)malloc(25*sizeof(int));
    *num = 4;

    squareNum(num);

    printf("%d", *num);

    return 0;
}