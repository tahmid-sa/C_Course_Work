#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file.txt", "w+");

    if (fp != NULL) {
        fputs("Hello how are you", fp);
    }

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String 1: %s\n", str1);
    printf("Read String 1: %s\n", str2);
    printf("Read String 1: %s\n", str3);
    printf("Read String 1: %d\n", year);

    return 0;
}