#include <stdio.h>

int main(void) {
    size_t sz = 0;

    printf("Enter the size of the array: ");
    scanf("%zd", &sz);

    int arr[sz], sum = 0;

    for (int i = 0; i < sz; i++) {
        printf("Enter the nums of the array: \n");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}