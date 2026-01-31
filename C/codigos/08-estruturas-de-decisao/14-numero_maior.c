#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois valores, a e b: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("a = %d é maior que b = %d\n", a, b);
    return 0;
}
