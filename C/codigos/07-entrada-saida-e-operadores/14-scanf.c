#include <stdio.h>

int main(){
    char c;
    int num;
    double num_real;

    printf("Dígite um caractere: ");
    scanf("%c", &c);
    printf("Dígite um número inteiro: ");
    scanf("%d", &num);
    printf("Dígite um número real: ");
    scanf("%lf", &num_real);
    printf("Os valores digitados foram: %c %d %f\n", c,num,num_real);
    return 0;
}
