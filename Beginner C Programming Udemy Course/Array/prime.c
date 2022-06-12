#include <stdio.h>

int main() {
    int primeNums[100] = {2, 3};
    int primeSize = 2;

    for (int num = 4; num < 100; num++) {
        for (int primeIndex = 0; primeIndex < primeSize; primeIndex++) {
            if (num % primeNums[primeIndex] == 0) {
                primeNums[primeIndex] = num;
                primeSize++;
            }
        }
    }
    
    for (int num = 0; num < 100; num++) {
        printf("%d\n", primeNums[num]);
    }
    

    return 0;
}