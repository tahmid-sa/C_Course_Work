#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    /*
    char ch = '\0';
    //FILE *fp;

    ch = getc(stdin);

    printf("read in character %c\n", ch);
    */

    /*
    int ch = 0;

    while ((ch = getchar()) != EOF) {
        printf("%c\n", ch);
    }
    */

    char ch = 0;

    while (isspace(ch = (char)getchar())) {
        ungetc(ch, stdin);
    }

    printf("char is %c\n", getchar());

    return 0;
}