#include <iostream>
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
    int num, bit;

    // 10 = 1010 >> 2 = 0010
    // 2 =  0100
    //      

    printf("Enter a number:\n");
    printf("Enter the nth bit:\n");
    scanf("%d %d", &num, &bit);

    if (((num >> bit) & 1) == 0) {
        printf("The %d bit is set to 0, bit is set successfuly", bit);
        num = num | (1 << bit);
    }
    else {
        printf("The %d bit is set to 1", bit);
    }

    printf("\nNumber after setting the bit: %d", num);
    

    return 0;
}