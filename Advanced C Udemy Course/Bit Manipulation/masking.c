#include <stdio.h>

int main(void) {
    int flags = 15;
    int mask = 1;

    flags = flags ^ mask;

    printf("%d\n", flags);

    if ((flags & mask) == mask) {
        printf("equal\n");
    }

    return 0;
}