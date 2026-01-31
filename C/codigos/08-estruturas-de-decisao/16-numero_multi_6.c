#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if ((n % 2 == 0) && (n % 3 == 0))
        printf("%d é múltiplo de 6\n", n);
    return 0;
}
