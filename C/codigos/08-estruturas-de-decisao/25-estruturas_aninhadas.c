#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n <= 100) // n <= 100
    {
        printf("O número é menor ou igual a 100\n");
    }
    else if (n <= 200)// n > 100 e n <= 200
    {
        printf("O número é maior que 100 e menor ou igual a 200\n");
    }
    else if (n <= 300) // n > 200 e n <= 300
    {
        printf("O número é maior que 200 e menor ou igual a 300\n");
    }
    else // n > 300
    {
        printf("O número não se enquadra em nenhuma das opções\n");
    }
    
    return 0;
}
