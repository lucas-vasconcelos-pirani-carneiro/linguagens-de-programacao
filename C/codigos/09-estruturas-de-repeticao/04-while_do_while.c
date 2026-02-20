#include <stdio.h>

int main()
{
    int num;
    int soma = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while (num != 0)
    {
        soma += num;
        printf("Digite um número: ");
        scanf("%d", &num);
    }

    printf("Soma: %d\n", soma);
    
    return 0;
}
