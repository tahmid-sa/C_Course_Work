#include <stdio.h>

struct point {
    int x, y, z;
};

int main(void) {
    /*
    struct point p1 = {.y = 0, .z = 1, .x = 2};
    struct point p2 = {.x = 20};

    printf("%d %d %d\n", p1.x, p1.y, p1.z);
    printf("%d %d", p2.x, p2.y);
    */

    struct point pts[5] = {[2].y = 5, [2].x = 6, [0].x = 2};

    for (int i = 0; i < 5; i++) {
        printf("%d %d\n", pts[i].x, pts[i].y);
    }

    return 0;
}