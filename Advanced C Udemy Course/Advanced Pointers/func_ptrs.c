#include <stdio.h>
#include <stdlib.h>

int somedisplay();
void func1(int a);
void func2(int a);

void func1(int a) {
    printf("%d\n", a);
}

void func2(int a) {
    printf("%d\n", a);
}

typedef void FuncType(int);

int somedisplay() {
    printf("printing some text\n");
}

int main(void) {

    FuncType *func_ptr = NULL;

    func_ptr = func1;
    (*func_ptr)(100);

    func_ptr = func2;
    (func_ptr)(200);

    return 0;
}