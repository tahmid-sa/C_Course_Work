#include <stdio.h>
#include <math.h>

int convertToBinary(long long n);
long long convertDecimalToBinary(int n);

int convertToBinary(long long n) {
    int decimalNumber = 0, i = 0, remainder = 0;

    while (n != 0) {
        remainder = n % 10;
        n = n / 10;

        decimalNumber += remainder * pow(2, i);
        i++;
    }

    return decimalNumber;
}

long long convertDecimalToBinary(int n) {
    long long ret = 0;

    for (int i = 0; i < sizeof(long long); i++) {
        ret += (n % 2) * pow(10, i);
        n /= 2;
    }

    return ret;
}

int main(void) {
    long long bin = 1001;

    int val = convertToBinary(bin);
    printf("Decimal value: %d\n", val);

    int decimal = 155;

    long long binary = convertDecimalToBinary(decimal);
    printf("Binary value: %lld", binary);

    return 0;
}