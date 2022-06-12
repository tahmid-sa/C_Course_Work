#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n) {
    long long ret = 0;

    for (int i = 0; i < sizeof(long long); i++) {
        ret += (n % 2) * pow(10, i);
        n /= 2;
    }

    return ret;
}

int main(void) {
    // reads two integers from the user

    // print the results applying ~ to each number
    // print the results applying &, |, ^
    // << and >> to a specific number
    // show the results as binary strings (use the decimalToBinary function)

    int w1, w2;

    printf("Enter the two int values:\n");
    scanf("%d %d", &w1, &w2);

    int notRes = ~w1;
    int notRes2 = ~w2;

    int andRes = w1 & w2;
    int orRes = w1 | w2;
    int xorRes = w1 ^ w2;

    int lShift = w1 << 2;
    int rShift = w2 >> 1;

    printf("~ w1= %d\n", convertDecimalToBinary(notRes));
    printf("~ w2= %d\n", convertDecimalToBinary(notRes2));

    printf("&= %d\n", convertDecimalToBinary(andRes));
    printf("|= %d\n", convertDecimalToBinary(orRes));
    printf("xor= %d\n", convertDecimalToBinary(xorRes));

    printf("<<= %d\n", convertDecimalToBinary(lShift));
    printf(">>= %d\n", convertDecimalToBinary(rShift));

    printf("<<= %d\n", lShift);
    printf(">>= %d\n", rShift);

    return 0;
}