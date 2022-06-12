#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main(void) {
    char string[400];
    strcpy(string, "Hello, how are you");
    puts(string);

    FILE *fp = NULL;
    fp = fopen("someFile.txt", "w");

    if (fp == NULL) {
        exit(1);
    }

    fputs("Hello there, I hope this article will help!", fp);
    fclose(fp);

    return 0;

}