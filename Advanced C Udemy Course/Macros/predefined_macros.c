#include <stdio.h>
#include <stdlib.h>

void jason(void) {
    printf("%s was called\n", __func__);
}

int main() {
    jason();

    printf("The file is %s line is %d", __FILE__, __LINE__);

}