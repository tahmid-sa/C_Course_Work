#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick-brown fox-foxi";
    const char s[2] = "-";
    char *token;

    token = strtok(str, s);

    while(token != NULL) {
        printf("%s\n", token);

        token = strtok(NULL, s);
    }

    return 0;
}