#include <stdio.h>
#include "foo.c"

static int fun() {
    static int count = 50;

    int localvar = 0;

    printf("automatic = %d\n static = %d\n", localvar, count);

    count++;
    localvar++;
    return count;
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", fun());
    }
    
    //printf("%d\n", fun());

    return 0;
}