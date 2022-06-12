#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;

    fp = fopen("somefile.txt", "r");

    if (fp == NULL) {
        printf("going to abort the program\n");
        abort();
    }

    printf("going to close the file\n");
    fclose(fp);

    return 0;
}