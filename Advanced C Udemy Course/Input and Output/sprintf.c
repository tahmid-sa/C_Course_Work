#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void) {
    //char string[100];
    /*
    int a = 10, b = 20, c = 0;
    c = a + b;


    sprintf(string, "Sum of the number %d + %d = %d", a, b, c);
    puts(string);
    */

   /*
    FILE *f = NULL;
    char ch[100];

    if ((f = fopen("myFile.txt", "r+")) == NULL) {
        printf("Cannot open th efile...");
        exit(1);

        for (int i = 0; i < 10; i++) {
            fprintf(f, "The count number is %d", i + 1);
        }
    }

    fclose(f);

    if ((f = fopen("myFile.txt", "r+")) == NULL) {
        printf("Cannot open th efile...");
        exit(1);
    }

    printf("File content is---\n");
    printf("\n..........printing the strings.....\n\n");

    while (!feof(f)) {
        fgets(ch, 100, f);
        printf("%s", ch);
    }

    fclose(f);
    */

    FILE *fp = NULL;
    char words[MAX];

    if ((fp = fopen("myFile.txt", "a+")) == NULL) {
        fprintf(stdout, "Cant open file\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter words to add to the file: press the #");
    puts("Key at the beginning of a line to terminate");

    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%s\n", words);
    }

    puts("File contents:");
    rewind(fp);

    while(fscanf(fp, "%s", words) == 1) {
        puts(words);
    }

    puts("Done");

    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
    }
 
    return 0;
}