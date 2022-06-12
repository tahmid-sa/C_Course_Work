#include <stdio.h>
#include <string.h>

int main(void) {
    /*
    int i; 

    char multiple[] = "a string";
    char *p = multiple;

    for (i = 0; i < strlen(multiple); i++) {
        printf("multiple[%d] = %c\n *(P + %d) = %c\n &multiple[%d] = %p\n P + %d = %p\n\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
    }
    */

    long multiple[] = {15L, 25L, 35L, 45L};
    long *p = multiple;

    for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); i++) {
        printf("address p + %d (&multiple[%d]): %llu\n *(p + %d) value: %d\n\n", i, i, (unsigned long long)(p + i), i, *(p + i));
    }

    printf("type of long occupies %d bytes\n", (int)sizeof(long));

    return 0;
}