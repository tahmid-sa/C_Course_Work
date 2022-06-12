#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int normal = 5;
    int *pnormal = &normal;
    int **ppnormal = &pnormal;

    // value of normal
    printf("value of normal using int = %d\n", normal); 
    printf("value of normal using int* = %d\n", *pnormal); 
    printf("value of normal using int** = %d\n", **ppnormal); 

    // address of normal
    printf("address of normal using &normal = %u\n", &normal); 
    printf("address of normal using &(*normal) = %u\n", &(*pnormal));
    printf("address of normal using &(**normal) = %u\n\n", &(**ppnormal));

    // value of single pointer variable
    printf("value of pnormal using pnormal = %d\n", pnormal); 
    printf("value of pnormal using *ppnormal = %d\n\n", *ppnormal); 

    // address of single pointer variable
    printf("address of normal using &pnormal = %u\n", &pnormal);
    printf("address of normal using &(*ppnormal) = %u\n\n", &(*ppnormal));

    // value of double ptr
    printf("value of normal using ppnormal = %u\n", ppnormal);

    // address of double ptr
    printf("address of normal using &ppnormal = %u\n", &ppnormal);

    return 0;
}