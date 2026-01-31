#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    printf("%d %d\n", a, b);
    return 0;
}
