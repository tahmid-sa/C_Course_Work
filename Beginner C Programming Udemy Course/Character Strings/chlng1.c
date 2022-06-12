#include <stdio.h>

int countLength(char arr[]);
void combineString(char arr[], char arr1[], char arr2[]);

int countLength(char arr[]) {
    int i;

    for (i = 0; arr[i] != '\0'; i++);

    return i;
}

void combineString(char arr[], char arr1[], char arr2[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        arr2[i] = arr[i];
    }

    for (int i = 0; arr1[i] != '\0'; i++) {
        arr2[countLength(arr) + i] = arr1[i];
    }

    printf("%s", arr2);
}

int main() {
    char arr[] = "hello";

    int count = countLength(arr);

    printf("%d\n", count);

    char arr1[] = "world";
    char arr2[12];

    combineString(arr, arr1, arr2);
    //printf("%s", arr2);

    return 0;
}