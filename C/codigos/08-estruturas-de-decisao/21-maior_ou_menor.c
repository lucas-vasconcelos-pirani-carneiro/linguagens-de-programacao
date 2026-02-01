#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    if (a >= b)
        printf("O primeiro número é maior ou igual ao segundo.\n");
    else 
        printf("O primeiro número é menor que o segundo.\n");
    printf("Os números digitados foram: %d %d\n", a, b);
    return 0;
}
