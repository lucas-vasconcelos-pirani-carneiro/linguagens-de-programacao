#include <stdio.h>

int main() {
    int a = 5;
    double b = a;
    printf("%d %lf\n", a, b);

    b = 9.74;
    a = b;
    printf("%d %lf\n", a, b);
    return 0;
}
