#include <stdio.h>
#define MONTHS 12

int main() {
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    //float sample_data[500] = {[2] = 500.5, [1] = 300.0}; C99 and after compilers do not supply this

    printf("Enter the 10 grades:\n");

    for (int i = 0; i < count; i++) {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;

    printf("\nAverage of ten grades is %.2f\n", average);

    return 0;
}