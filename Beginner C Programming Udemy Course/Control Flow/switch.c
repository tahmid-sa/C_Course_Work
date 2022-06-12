#include <stdio.h>

int main() {
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday};
    enum Weekday today = Monday;

    switch (today) {
        case Monday:
            printf("monday");
            break;
        case Tuesday:
            printf("tuesday");
            break;
        default:
            printf("whatever");
            break;
    }

}