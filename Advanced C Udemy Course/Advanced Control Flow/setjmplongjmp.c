#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

void myFunction();

jmp_buf buf;

void myFunction() {
    printf("in my function\n");
    longjmp(buf, 0);

    /// not reached
    printf("never reached");
}

int main(void) {
    /*
    if (setjmp(buf)) {
        printf("back in main\n");
    }
    else {
        printf("first time through\n");
        myFunction();
    }
    */

    /*
    int i = setjmp(buf);
    printf("i = %d\n", i);

    if (i != 0) {
        exit(0);
    }

    longjmp(buf, 42);
    printf("does this line get printed?\n");
    */

    switch(setjmp(buf)) {
        //longjmp(buf, 0);

        case 0:
            printf("sus");
            break;
        case 1:
            printf("sus indeed");
            break;
        default:
            printf("not sus");
    }

    return 0;
}