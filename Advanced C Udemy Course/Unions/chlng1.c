#include <stdio.h>
#include <stdlib.h>

union student {
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main(void) {
    union student var1;
    union student var2;

    var1.exactGrade = 87.7;
    var1.letterGrade = 'A';
    var1.roundedGrade = 88;
    printf("%c %d %f\n", var1.letterGrade, var1.roundedGrade, var1.exactGrade);

    var2.letterGrade = 'B';
    printf("%c\n", var2.letterGrade);

    var2.roundedGrade = 75;
    printf("%d\n", var2.roundedGrade);

    var2.exactGrade = 75.4;
    printf("%f\n", var2.exactGrade);
    
    return 0;
}