#include <stdio.h>
#include <stdlib.h>

//#define MY_MACRO

int main(void) {

    int i;
    printf("Line = %d\n", __LINE__);
    printf("FILE = %s\n", __FILE__);

    printf("Date = %s\n", __DATE__);
    printf("Time = %s\n", __TIME__);

    #ifdef MY_MACRO
        printf("my macro");
    #endif

    return 0;
}