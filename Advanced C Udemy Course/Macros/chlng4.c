#include <stdio.h>
#include <stdlib.h>

#define IS_UPPER(a) (a >= 'A' && a <= 'Z')
#define IS_LOWER(a) (a >= 'a' && a <= 'z')

int main(void) {
    char b = 'a';

    printf("%c is %d", b, IS_UPPER(b));
    // print comments

    return 0;
}