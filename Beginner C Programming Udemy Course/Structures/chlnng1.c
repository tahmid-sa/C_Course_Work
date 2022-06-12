#include <stdio.h>
#include <stdlib.h>

struct Employee;

struct Employee {
    char name[20];
    char hireDate[15];
    float salary;
};

int main(void) {
    struct Employee emp1 = {"Ben", "2015", 75.0};

    struct Employee emp2;

    printf("Enter the second info: \n");
    scanf("%s", &emp2.name);
    scanf("%s", &emp2.hireDate);
    scanf("%f", &emp2.salary);

    // Printing
    printf("\n Name 1: %s", emp1.name);
    printf("\n hite date 1: %s", emp1.hireDate);
    printf("\n salary 1: %f", emp1.salary);

    printf("\n Name 2: %s", emp2.name);
    printf("\n hite date 2: %s", emp2.hireDate);
    printf("\n salary 2: %f", emp2.salary);

    return 0;
}