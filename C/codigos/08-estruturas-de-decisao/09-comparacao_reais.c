#include <stdio.h>

int main(void) {
    double a = 1.0;
    double b = (0.3 * 3) + 0.1;
    int valor_expr = (a == b);
    printf("%.20f %.20f %d\n", a, b, valor_expr); 
   // Resultado: 1.00000000000000000000 0.99999999999999988898 0
    return 0;
}
