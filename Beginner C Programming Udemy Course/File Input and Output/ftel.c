#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    int len;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return(-1);    
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("total size of file.txt = %d", len);

    return 0;
}