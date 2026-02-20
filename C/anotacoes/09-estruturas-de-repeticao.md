# Estruturas de Repetição

- As estruturas de repetição nos permitem **repetir** um determinado comando por um determinado número de vezes. 
- A linguagem C felizmente fornece para nós três estruturas de repetição: `while`, `do while` e `for`.

## While 

- `While` (**enquanto**): enquanto a **condição** for `verdadeira`, faça.
- A estrutura while segue o fluxo abaixo:
    1. Testa uma condição, caso ela seja verdadeira, vá para o passo 2, caso contrário, vá para o passo 4.
    2. Execute o bloco de comandos.
    3. Volte para o passo 1.
    4. Continue o fluxo normal de execução do programa.

![while](../img/09-estruturas-de-repeticao/fluxo-while.png)

#### Sintaxe
- Único Comando:
```c
while (comando)
    comando;
```

- Múltiplos Comandos:
```c
while (comando) {
    comando_1;
    comando_2;
    ...
    comando_n;
}
```

> [!NOTE]
>
> #### Observação: 
> - A condicao é uma **expressão** e pode envolver `operadores relacionais`, `aritméticos` e `lógicos`.

#### Exemplos
*Exemplo:* O usuário deve digitar um valor n e o programa deverá imprimir todos os inteiros positivos até o valor n.
```c
#include <stdio.h>

int main(void) {
    int n;
    printf("Dígite um número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) 
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
```

## Do While

- A estrutura `do while` em C **primeiro** executa os comandos para depois verificar se a condição é verdadeira.
- Enquanto a condição for verdadeira, volta a executar o bloco de comandos.
- Garante que o bloco de comandos é executado **pelo menos uma vez**.
- `Do While`: faça enquanto a condição for verdadeira.
- A estrutura do while segue o fluxo abaixo:
    1. Execute o bloco de comandos.
    2. Verifique se a condição é verdadeira, em caso afirmativo, vá para o passo 1, caso contrário, vá para o passo 3.
    3. Continue o fluxo normal de execução do programa.

![do-while](../img/09-estruturas-de-repeticao/fluxo-do-while.png)

#### Sintaxe
- Único Comando:
```c
do 
    comando;
while (condicao);
```

- Múltiplos Comandos:
```c
do {
    comando_1;
    comando_2;
    ...
    comando_n;
} while (condicao);
```

> [!NOTE]
>
> #### Observação: 
> - A condicao é uma **expressão** e pode envolver `operadores relacionais`, `aritméticos` e `lógicos`.

#### Exemplos
*Exemplo:* O usuário deve digitar um valor n e o programa deverá imprimir todos os inteiros positivos até o valor n.
```c
#include <stdio.h>

int main(void) {
    int n;
    printf("Dígite um número: ");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;    
    } while (i <= n);
   
    return 0;
}
```

### While x Do While
- Devemos empregar o while e o do while em situações adequadas.
- `while` : o teste da condição é feito **antes da execução** do bloco.
- `do while` : o teste da condição é feito apenas **após a execução** do bloco.
- Existem ocasiões em que o uso de um é mais **apropriado** que o uso do outro.
- Vamos examinar agora um problema cuja solução é mais **natural** com `do while` .

*Exemplo:* Enquanto o usuário não digitar o valor 0, deverá ser lido um inteiro.Finalmente, quando o usuário digitar o valor 0, o programa deverá parar de ler os valores, apresentar a soma de todos os números lidos e encerrar.

```c
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
```

- O programa equivalente utilizando a estrutura `while` pode ser visto a seguir. 

```c
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
```

## For

#### Sintaxe
- Único Comando:
```c

```

- Múltiplos Comandos:
```c

```

> [!NOTE]
>
> #### Observação: 
> - 

#### Exemplos
*Exemplo:* 
```c
#include <stdio.h>

int main(void) {
    
    return 0;
}
```

### For x While

## Considerações

> [!WARNING]
>
> - 
