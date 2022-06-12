#include <stdio.h>

int main() {
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr;

    vptr = &i;
    printf("value of i is %d\n", *(int*)vptr);

    vptr = &f;
    printf("value of f is %.2f\n", *(float*)vptr);

    vptr = &ch;
    printf("value of ch = %c\n", *(char*)vptr);

    return 0;
}