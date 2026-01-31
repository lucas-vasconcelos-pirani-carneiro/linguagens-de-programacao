# Estrutura de Decisão
- As operações aritméticas também são consideradas **expressões**.
- Outro tipo de expressão, são as `expressões relacionais`, as quais possuem dois tipos de retorno:
    - `0 (Falso)`.
    - `1 (Verdadeiro)`.
- Podemos usar os **operadores relacionais** para realizar comparações entre duas expressões.
- O resultado destas comparações pode ser utilizado, através de **estruturas condicionais** para desviar o `fluxo do código`, fazendo com que ele se comporte de uma determinada maneira caso uma **condição especı́fica** seja atingida.

![fluxo-de-codigo](../img/08-estruturas-de-decisao/fluxo-de-codigo.png)

- Para escrever expressões mais complexas, podemos utilizar os **operadores lógicos**, que são capazes de `ligar` duas ou mais expressões de acordo com uma determinada finalidade:
    - **NÃO** `expr`.
    - `expr` **E** `expr`.
    - `expr` **OU** `expr`.
- As expressões criadas com estes operadores também podem ser utilizadas com finalidade de **desvio do fluxo do código**, fazendo com que ele se comporte de uma determinada forma quando certas condições forem atingidas.

## Operadores Relacionais

### Igualdade 
- O operador de igualdade, quando aplicado sobre duas expressões, `retorna 1` (**verdadeiro**), quando elas são iguais, ou `0` (**falso**), quando elas são diferentes.
- Na linguagem C, usamos os sı́mbolos `==`:
    - `9 == 9 // retorna 1 (verdadeiro)`.
    - `0 == 5 // retorna 0 (falso)`.

*Exemplos:* Igualdade
```c
#include <stdio.h>

int main(void) {
    printf("%d\n", 42 == 42); // retorna 1
    return 0;
}
```

```c
#include <stdio.h>

int main(void) {
    printf("%d\n", 21 == 42); // retorna 0
    return 0;
}
```

```c
#include <stdio.h>

int main(void) {
    printf("%d\n", (2 + 3) == (1 + 4)); // retorna 1
    return 0;
}
```

```c
#include <stdio.h>

int main(void) {
    int a = 2, b = 3, c = 1, d = 4; 
    printf("%d\n", (a + c) == (b + d)); // retorna 0
    return 0;
}
```

> ![WARNING]
>
> Não confundir os sı́mbolos de **atribuição** (`=`) e **igualdade** (`==`). 
>  - `=` é utilizado para **atribuir** a uma variável o **valor** de uma expressão.
> - `==` é utilizado para **comparar** duas expressões.


### Diferença

*Exemplos:* Igualdade
```c
```

### Maior

*Exemplos:* Igualdade
```c
```

### Maior ou Igual

*Exemplos:* Igualdade
```c
```

### Menor

*Exemplos:* Igualdade
```c
```

### Menor ou Igual

*Exemplos:* Igualdade
```c
```

### Comparação de Números Reais

## Operadores Lógicos

## Estrutura de Decisão

## Considerações


