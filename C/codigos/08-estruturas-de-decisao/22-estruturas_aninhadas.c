#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número : ");
    scanf("%d", &n);

    if (n % 2 == 0) // n é par  
    { 
        if (n < 50) {
        printf("O número é par e menor que 50\n");
        }
        else {
        printf("O número é par e maior ou igual do que 50\n");
        }
    }
    else // n é ı́mpar 
    { 
        if (n < 50) {
            printf("O número é ímpar e menor que 50\n");
        }
        else {
            printf("O número é ímpar e maior ou igual do que 50\n");
        }
    }
    return 0;
}
