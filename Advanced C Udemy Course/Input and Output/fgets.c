#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main(void) {
    /*
    char buf[255]; 
    int ch = '\0';
    char *p = NULL;

    if (fgets(buf, sizeof(buf), stdin)) {
        p = strchr(buf, '\n');

        if (p) {
            *p = '\0';
        }
        else {
            while (((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin));
        }
    }

    printf("Our buffer contains: %s", buf);
    */

    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));

    if (buffer == NULL) {
        exit(1);
    }

    printf("Type something: ");
    characters = getline(&buffer, &bufsize, stdin);

    printf("%zu characters were read\n", characters);
    printf("You typed: %s\n", buffer);

    return 0;
}