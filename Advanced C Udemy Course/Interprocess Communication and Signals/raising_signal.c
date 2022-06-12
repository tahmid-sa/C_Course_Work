#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void) {
    printf("testing SIGSTOP\n");
    raise(SIGSTOP);
    printf("i am back");

    return 0;
}