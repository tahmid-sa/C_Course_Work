#include <stdio.h>

int main() {

    enum company {Facebook, Amazon = 4, Apple, Netflix, Google};

    //creating an enum variable
    enum company google = Google;
    enum company amazon = Amazon;

    printf("Value of google is: %d\n", Google);
    printf("Value of amazon is: %d", amazon);

    return 0;
}