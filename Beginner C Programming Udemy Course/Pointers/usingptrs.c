#include <stdio.h>

int main() {
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L; //num1 = 2
    ++num2; //num2 = 1
    num2 += *pnum; //num2 = 3

    pnum = &num2;
    ++*pnum; // num2 = 4

    printf("num1 is %ld num2 is %ld &pnum is %ld *pnum + num2 is %ld\n", num1, num2, *pnum, *pnum + num2); // 2 4 4 8

    int value = 0;
    int *pvalue = &value;

    printf("Input an integer: ");
    scanf("%d", pvalue);

    printf("You entered %d\n", value);

    int *ptr = NULL;


    return 0;
}