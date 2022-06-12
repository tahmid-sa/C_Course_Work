#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick brown fox";
    char ch[] = "quick";
    char *pGotStr = NULL;

    pGotStr = strstr(str, ch);

    printf("%s", pGotStr);
}