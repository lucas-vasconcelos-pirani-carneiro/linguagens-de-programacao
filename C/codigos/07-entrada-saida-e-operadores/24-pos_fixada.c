#include <stdio.h>

int main(void) {
    int a = 2;
    int b = a++ + 2;
    printf("O valor de a é %d e o valor de b é %d\n", a, b); // 3 e 4
    return 0;
}
