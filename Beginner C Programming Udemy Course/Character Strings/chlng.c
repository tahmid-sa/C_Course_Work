#include <stdio.h>
#include <string.h>

void reverseOrder(char arr[]);

void reverseOrder(char arr[]) {
    for (int i = strlen(arr) - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
}

int main() {
    // String reverse order, use strlen function

    char arr[] = "hello";

    reverseOrder(arr);

    return 0;
}