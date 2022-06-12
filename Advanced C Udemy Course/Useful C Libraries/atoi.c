#include <stdio.h>
#include <stdlib.h>

//double strtod(const char *str, char **str_end);

int main(void) {
    char a[] = "365.25 7.0", *end;
    //double value = 0;
    float value = strtof(a, &end);
    float value2 = strtof(end, NULL);

    //int value = atoi(a);
    //float valuef = atof(a);
    //long valuel = atol(a);

    //value = strtod(a, &end);

    printf("value = %lf\n", value);
    printf("value 2 = %lf\n", value2);


    return 0;
}