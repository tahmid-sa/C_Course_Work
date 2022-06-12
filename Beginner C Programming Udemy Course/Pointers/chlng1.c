#include <stdio.h>

int main() {
    int val = 3;
    int *pval = &val;

    printf("Address of val: %d\n", &val);
    printf("Address of pval: %d\n", &pval);
    printf("Value of pointer pval: %p\n", pval);
    printf("value of pval pointed to: %d", *pval);

    return 0;
}