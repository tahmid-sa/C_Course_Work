#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
    char source[] = "Jasoniiii";
    char *target = strndup(source, 5);

    printf("Duplicated string is %s", target);

    return 0;
}