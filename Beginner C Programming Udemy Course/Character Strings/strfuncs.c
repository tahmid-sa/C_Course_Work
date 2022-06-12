#include <stdio.h>
#include <string.h>

int main() {
    char num[] = "12345";

    printf("%d\n", strlen(num));

    char copying[6];

    strncpy(copying, "copyi", 3);

    printf("%s\n", copying);

    strncat(copying, num, 3);

    printf("%s\n", copying);

    char num2[] = "12345";

    printf("%d\n", strcmp(num2, "12345"));

    return 0;
}