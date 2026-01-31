#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0 || n % 5 == 0)
        printf("%d é múltiplo de 2 ou de 5\n", n);
    return 0;
}
