#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    void *pvData = NULL;
    int *iData = NULL;
    char *cData = NULL;
    float *fData = NULL;

    printf("size of void ptr = %d\n", sizeof(pvData));
    printf("size of int ptr = %d\n", sizeof(iData));
    printf("size of char ptr = %d\n", sizeof(cData));
    printf("size of float ptr = %d\n", sizeof(fData));

    return 0;
}