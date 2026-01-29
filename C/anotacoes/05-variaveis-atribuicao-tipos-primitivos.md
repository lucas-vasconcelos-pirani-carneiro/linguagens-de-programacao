# Variáveis, Atribuição e Tipos Primitivos

## Variáveis
- Uma **variável** é um nome para uma `posição de memória` que **armazena** um valor.
- Através dos nomes das variáveis, podemos realizar `operações` entre valores.
- Cada variável tem um **tipo**, que determina que `tipo de informação` está armazenada naquele pedaço de memória indicado pelo **nome da variável**.
- O ato de **declarar** uma variável consiste em dizer qual o `tipo` e o `nome` referentes a ela.

### Declaração de uma Variável
`<tipo> nome_da_variável;`

### Regras para Nomeação de Variáveis
- Existem algumas regras para nomeação das variáveis.
- Caso uma variável seja nomeada com um nome que **não atenda** essas regras, o programa **não** poderá ser **compilado**.
- Devemos obedecer a **sintaxe** correta da linguagem.

#### Regras
1. Deve começar com uma **letra** ou **subscrito** (_).
2. Pode ser composta de **letras maiúsculas** e **minúsculas** (*sem acento*), **números** e **subscrito**.
3. Não se pode utilizar **caracteres especiais** como: {( + - * / \ ; . , ? )}
4. Não se pode utilizar um nome **já declarado antes**. Exceto se em `escopos diferentes`.
5. Não se pode utilizar palavras **reservadas** da linguagem C.

*Exemplos:*
```c
/* Uso Incorreto */
int 42b; // não começa com letra ou subscrito
float @variavel; // contém caractere especial
char isso#naopode; // contém caractere especial
int a; // ok
float a; // não está ok, já existe uma variável chamada 'a'
int b; // ok
int b; // não está ok, já existe uma variável chamada b

/* Declaração de Variáveis */
int numero;
float euler;
double numero_real;
char letra;
```

> [!NOTE]
>
> #### Boa Prática de Programação: Nomeação de Variáveis
> Sempre utilize nomes **mnemônicos** para suas variáveis. Isso deixará o
> seu programa mais **legı́vel** por você e por outras pessoas. Evite utilizar
> nomes que não reflitam o uso daquela variável.

```c
// Variáveis Mnemônicas
double preco_abacate;
int idade_usuario;
char opcao_escolhida;

// Variáveis não Mnemônicas
double fnx;
int seila;
char nanananabatman;
```

#### Palavras Reservadas
- Existem diversas palavras reservadas em C que não podem ser empregadas no nome de variáveis.

|   |  |  |  |
| -------- | -------- | ---------- | -------- |
| auto     | else     | long       | switch   |
| break    | enum     | register   | typedef  |
| case     | extern   | return     | union    |
| char     | float    | short      | unsigned |
| const    | for      | signed     | void     |
| continue | goto     | sizeof     | volatile |
| default  | if       | static     | while    |
| do       | int      | struct     | double   |

> [!NOTE] 
>
> As palavras  `_Bool`, `_Complex`, `_Imaginary`, `inline` e `restrict` foram introduzidas no padrão **C99**.

### Case Sensitivy
- A nomeação de variáveis e outros identificadores na linguagem C é sensı́vel ao caso (`case-sensitive`), isto é, se tivermos mesma sequência de sı́mbolos, mas com **diferentes capitalizações**, tratamos como variáveis (ou identificadores) **distintos**.
- *Exemplos:*
    - a $\neq$ A
    - numero $\neq$ Numero

```c
int a; // ok
int A; // ok
float numero_real; // ok
double Numero_real; //ok
```

### Múltiplas Declarações
- Caso queiramos declarar diversas variáveis de um mesmo tipo, podemos fazê-lo em uma **única linha**.
- Basta **separar** as variáveis por **vı́rgulas**.
- Sintaxe: `<tipo> <nome_1>, <nome_2>, ... , <nome_n>;`

*Exemplo:* Múltiplas Declarações
```c
int num_1,num_2,num_3;
```

## Tipos



### Inteiros
### Reais
### Caracteres

## Atribuição

## Estrutura


```c

```
