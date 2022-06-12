#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    bool varbool = true;
    //printf(varbool);

    enum gender {male, female};

    enum gender myGender;
    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    char myCharacter = 'n';

    printf("%c", myCharacter);

    int intVar = 100;
    float floatVar = 331.799999;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    bool boolVar = true;

    printf("\nanotherGender %e\n", anotherGender);

    printf("integerVar %i asasf %d\n", intVar, intVar);
    printf("floatVar %f asdf %.2f\n", floatVar, floatVar);
    printf("doubleVar %e\n", doubleVar);
    printf("doubleVar %g\n", doubleVar);
    printf("charVar %c\n", charVar);
    printf("boolVar %i\n", boolVar);

    int numOfArguments = argc;
    char *argument1 = argv[1];
    char *argument2 = argv[2];

    printf("Number of arguments: %d \n", numOfArguments);
    printf("Argument 1: %s \n", argument1);
    printf("Argument 2: %s \n", argument2);

    return 0;
}