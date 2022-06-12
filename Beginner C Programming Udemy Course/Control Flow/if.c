#include <stdio.h>

int main() {
    int num = 0;
    int num2 = 1;

    if (num == num2) {
        printf("Yes");
    }
    else if (num != num2) {
        printf("No");
    }

    int a = num > num2 ? 3 : 5;

    printf("%d", a);

    return 0;
}