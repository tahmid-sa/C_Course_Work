#include <stdio.h>

struct box {
    unsigned int:22;
    unsigned int opaqueTrans:1;
    unsigned int fillColour:3;
    unsigned int borderShownHidden:1;
    unsigned int borderColour:3;
    unsigned int borderStyle:2;
};

// 7 = 0111

void show_settings(const struct box *pb);

void show_settings(const struct box *pb) {
    printf("Box is %d\n", pb->opaqueTrans);
    printf("Box is %d\n", pb->fillColour);
    printf("Box is %d\n", pb->borderShownHidden);
    printf("Box is %d\n", pb->borderColour);
    printf("Box is %d\n", pb->borderStyle);
}

int main(void) {
    struct box b1 = {.opaqueTrans = 0, .fillColour = 3, .borderShownHidden = 0, .borderColour = 2, .borderStyle = 2};

    show_settings(&b1);
    printf("\n");

    b1.opaqueTrans = 1;
    b1.fillColour = 7;
    b1.borderColour = 5;
    b1.borderStyle = 0;

    show_settings(&b1);

    return 0;
}