#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int convertBinaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder = 0;

    while (n != 0) {
        remainder = n % 10;
        n = n / 10;

        decimalNumber += remainder * pow(2, i);
        i++;
    }

    return decimalNumber;
}

int main(void) {
    long long n;
    int result = 0;

    printf("Enter a binary number: ");
    scanf("%ld", &n);

    result = convertBinaryToDecimal(n);
    printf("%lld in binary = %d\n", n, result);

    return 0;
}