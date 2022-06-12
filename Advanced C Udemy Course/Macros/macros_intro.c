#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define PRNT(a, b)\
    printf("value 1 = %d\n", a); \
    printf("value 2 = %d\n", b);

double circleArea(double x) {
    return 3.14 * x * x;
}

#define Warning(format, ...) fprintf(format, stderr, __VA_ARGS__)
#define FOO BAR
#define BAR (12)

#define MISC(x) (puts("incrementing", (x)++))
#define Max(a, b) ((a) > (b) ? (a) : (b))

#define UpTo(i, n) for((i) = 0; (i) < (n); (i)++)

#define CIRCLE_AREA(X) ((PI) * (X) * (X))

int main() {
    int x = 2;
    int y = 3;
    PRNT(x, y);

    int area = CIRCLE_AREA(4);
    // area = (3.14 * 4 * 4);

    printf("area is %d\n", area); 

    Warning("%s: this program is here\n", "jason");

    return 0;
}