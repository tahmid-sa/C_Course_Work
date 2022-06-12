#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int bytes = 0;
    printf("Enter the number of bytes: ");
    scanf("%d", &bytes);

    char *str = (char*)malloc(sizeof(char) * bytes);
    printf("Enter the string");
    scanf("%s", str);

    printf("%s", str);

    free(str);

    return 0;
}