#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

int error_recovery();

jmp_buf buf;

int error_recovery() {
    printf("error\n");
    longjmp(buf, 1);
}

int main(void) {
    while (setjmp(buf) != 1) {
        printf("no error\n");
        error_recovery();
    }
    

    return 0;
}