#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int impar = !((n % 2) == 0);
    printf("%d\n", impar);
    return 0;
}
