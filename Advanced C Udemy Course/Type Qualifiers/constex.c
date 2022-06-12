#include <stdio.h>

void display(const int array[], int limit);
char *strcat(char *restrict s1, const char *restrict s2);

int main(void) {
    const double pi = 3.14159;

    const int days[12] = {31, 28, 31, 30};

    typedef const int zip;
    const zip q = 8;

    const float *pf;
    float * const pt;
    const float * const ptr;



    return 0;
}