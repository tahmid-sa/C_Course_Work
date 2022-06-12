#include <stdio.h>

int main(void) {
    int a = 10;
    int *p1 = NULL;
    int **p2 = NULL;

    p1 = &a;
    p2 = &p1;

    printf("address of a = %u\n", &a);
    printf("address of p1 = %u\n", &p1);
    printf("address of p2 = %u\n", &p2);

    printf("value of a = %u\n", a);
    printf("value of p1 = %u\n", *p1);
    printf("value of p2 = %u\n", *p2);

    printf("value of **p2 = %u\n", **p2);

    return 0;
}