#include <stdio.h>

int main(void) {
    /*
    char string[] = "Hello jason, \nwhatever";
    int i = 0;
    
    while (string[i] != '\0') {
        if (string[i] != '\n') {
            putchar(string[i]);
        }

        ++i;
    }
    */

   /*
    int ch = 0;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    ungetc(ch, stdin);

    printf("Thank you!\n");
    */

    FILE *pFile = NULL;
    char c = '\0';

    pFile = fopen("myFile.txt", "w");

    if (pFile != NULL) {
        for (c = 'A'; c <= 'Z'; c++) {
            fputc(c, stdout);
        }

        fclose(pFile);
    }


    return 0;
}