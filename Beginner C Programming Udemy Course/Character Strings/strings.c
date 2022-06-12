#define TAXRATE 0.015
#define OOP "Object oriented programming"
#include <stdio.h>

int main() {
    char myString[20] = "hello";
    const int months = 12;

    printf("%s\n", myString);
    printf("%f\n", TAXRATE);
    printf("%s\n", OOP);

    return 0;
}