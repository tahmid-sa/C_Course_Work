#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *ch = (char*)malloc(15 * sizeof(char));

    //strcpy(ch, "hello");
    *ch = 'i';

    printf("%p,\n %c", ch, *ch);

    return 0;
}