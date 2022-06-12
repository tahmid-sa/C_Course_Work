#include <stdio.h>

int findLength(const char *str);

int findLength(const char *str) {
    const char *beg = str;

    while (*str != '\0') {
        str++;
    }

    return str - beg;
}

int main(void) {
    // write a function that calculates the length of a string
    // the function will take as a parameter a const char pointer
    // the function can only determine the length using pointer arithmetic
    // Use a while loop using the value of the pointer to exit
    // the function should subtract two pointers (one pointing to the end of the string and one pointing to the beginning)
    // the function should return an int that is the length of the string

    char str[] = "hello";
    printf("%d", findLength(str));

    return 0;
}