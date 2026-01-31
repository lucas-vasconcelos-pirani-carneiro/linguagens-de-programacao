#include <stdio.h>

int main(void) {
    int numero;
    scanf("%d", &numero);
    int divisivel_por_6 = (numero % 2 == 0)  && (numero % 3 == 0); 
    printf("%d\n", divisivel_por_6);
    return 0;
}
