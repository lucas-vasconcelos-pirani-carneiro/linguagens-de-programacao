#include <stdio.h>

int main(void) {
    int a, b;
    int menor;
    printf("Digite dois números : ");
    scanf("%d %d", &a, &b);

    if (a < b) 
    {
        menor = a;
    }
    else 
    {
        menor = b;
    }
    printf("O menor dos valores digitados é %d\n", menor);
    
    return 0;
}
