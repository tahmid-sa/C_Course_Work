#include <stdio.h>
#include <malloc.h>

struct myArray {
    int length;
    int array[];
};

int main(void) {
    printf("Enter the size: ");

    struct myArray *ptr = NULL;
    int sz = 0;
    scanf("%d", &sz);

    size_t size = sizeof(struct myArray);
    ptr = malloc(size + (sizeof(int) * sz));

    ptr->length = sz;

    for (int i = 0; i < sz; i++) {
        ptr->array[i] = i;
        printf("%d", ptr->array[i]);
    }

    return 0;
}