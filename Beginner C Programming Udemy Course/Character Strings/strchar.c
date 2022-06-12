#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick brown fox";
    char ch = 'q';
    char *pGotChar = NULL;

    pGotChar = strchr(str, ch);
    printf("%d\n", *pGotChar);

    return 0;
}