#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois números : ");
    scanf("%d %d", &a, &b);
    
    int menor = a < b ? a : b;
    printf("O menor dos valores digitados é %d\n", menor);
    
    return 0;
}
