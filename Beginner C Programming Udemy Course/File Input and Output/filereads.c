#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char str[60];

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    if (fgets(str, 60, fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}