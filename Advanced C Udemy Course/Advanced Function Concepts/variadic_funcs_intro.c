#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double average(double v1, double v2, ...);

double average(double v1, double v2, ...) {
    va_list parg;
    double sum = v1 + v2;
    double value = 0.0;

    int count = 2;
    va_start(parg, v2);

    while ((value = va_arg(parg, double)) != 0.0) {
        sum += value;
        ++count;
    }

    va_end(parg);

    return sum / count;
}

int main(void) {
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Average = %.1lf\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average = %.1lf\n", average(1.0, 2.0, 0.0));
    printf("Average = %.1lf\n", average((double)num2, v2, (double)num1, (double)v1));

    return 0;
}