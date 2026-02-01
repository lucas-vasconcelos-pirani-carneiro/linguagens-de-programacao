#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d é par\n", n);
    else
        printf("%d é ı́mpar\n");
    return 0;
}
