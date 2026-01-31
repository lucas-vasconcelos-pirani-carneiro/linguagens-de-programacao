#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 1.0;
    double b = (0.3 * 3) + 0.1;
    const double epsilon = 1e-6; // 0.000001, 10^-6
    int valor_expr = (fabs(a - b) < epsilon);
    printf("%.20f %.20f %d\n", a, b, valor_expr); 
    // Resultado: 1.00000000000000000000 0.99999999999999988898 1 
    return 0;
}
