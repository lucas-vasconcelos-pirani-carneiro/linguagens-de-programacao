#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    int divisivel_por_5_ou_10 = (numero % 5 == 0) || (numero % 10 == 0);
    printf("%d\n", divisivel_por_5_ou_10);
    return 0;
}
