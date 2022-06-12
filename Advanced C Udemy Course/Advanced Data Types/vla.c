#include <stdio.h>

int sum2d(int rows, int cols, int array[rows][cols]);

int sum2d(int rows, int cols, int array[rows][cols]) {
    int r, c, tot = 0;

    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            tot += array[r][c];
        }
    }

    return tot;
}

int main(void) {
    int arr[5][5] = {{0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}};

    printf("%d", sum2d(5, 5, arr));

    return 0;
}