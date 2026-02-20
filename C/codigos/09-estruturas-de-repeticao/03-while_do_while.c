#include <stdio.h>

int main()
{
    int num;
    int soma = 0;
    
    do
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);
    
    printf("Soma: %d\n", soma);

    return 0;
}
