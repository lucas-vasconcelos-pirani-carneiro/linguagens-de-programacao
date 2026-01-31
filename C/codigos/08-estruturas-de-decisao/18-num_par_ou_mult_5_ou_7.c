#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0 || ((n % 5 == 0) && (n % 7 == 0)))
        printf("%d é par ou múltiplo de 5 e 7\n", n);
    return 0;
}
