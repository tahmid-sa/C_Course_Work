#include <stdio.h>

int main() {
    double width, height, area, perimeter;

    width = 32.5;
    height = 23.3;

    area = width * height;
    perimeter = (2 * width) + (2 * height);

    printf("Height and width: %g %g\n", height, width);
    printf("The area: %g\nThe perimeter: %g", area, perimeter);

    return 0;
}