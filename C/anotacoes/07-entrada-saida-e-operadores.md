# Entrada, Saída e Operadores
- A linguagem C possui mecanismos de **captura** e **envio de dados** para dispositivos.
- Estamos nos referindo à entrada e saı́da.
- As funcionalidades são providas pelo **cabeçalho** `<stdio.h>` da **biblioteca padrão** do C.

### Entrada Padrão
- A entrada padrão da linguagem C é denominada `stdin` e geralmente é dada pelo **teclado**. Isto é, os **dados**, por padrão, são **capturados** pelo teclado.
- O usuário pode digitar valores, através do teclado, que são, por sua vez, **armazenados** nas variáveis, em `memória`.

### Saída Padrão
- A saı́da padrão da linguagem C é denominada `stdout` e geralmente é dada pela **tela** (monitor). Isto é, os dados por padrão são **impressos** na tela.
- É possı́vel instruir o programa a imprimir o **valor de uma variável** na tela para visualização do usuário.

### Saída de Erros
- A saı́da de erros padrão da linguagem C é denominada `stderr` e também é dada pela **tela**. Isto é, as informações relativas à erros também são **impressas em tela**.

## Saída

### printf
- A impressão de **mensagens** ou de **valores das variáveis** em tela pode ser feita através do comando `printf`.
- Para utilizar este comando, precisamos instruir o nosso programa a **incorporar** as **definiçõe**s presentes no **arquivo de cabeçalho** `stdio.h`.
- Adicionamos a linha `#include <stdio.h>` no inı́cio do programa.
- Para imprimir mensagens, basta utilizar o comando `printf` especificando, entre **aspas duplas**, a mensagem a ser impressa.
- Após o comando, é necessária a presença do **ponto-e-vı́rgula**.
- Exemplo: `printf("Mensagem");`

*Exemplo:* Hello World
```c
#include <stdio.h>

int main(void){
    printf("Hello World!\n");
    return 0;
}
```

- O programa irá imprimir a mensagem *“Hello World!”* e **saltar** uma linha.
- O sı́mbolo `\n` representa um **caractere de controle** que instrui uma **quebra de linha**.
- Além de imprimir mensagens, é possı́vel imprimir o **conteúdo** de uma variável.
- Temos que indicar para o `printf` o **formato** no qual queremos imprimir aquela variável.
- Utilizamos os **especificadores de formato**.

### Impressão de Inteiros

#### %d
- Para imprimir variáveis `int`, podemos utilizar o **especificador de formato** `%d`.
- Ao encontrar o `%d`, o comando `printf` irá substituir este especificador pelo **valor da variável** (ou expressão) correspondente.
- `%d` especifica que queremos imprimir um **inteiro em decimal**.
- Equivalentemente, podemos usar o `%i`.

*Exemplos:* Impressão de Inteiros
```c
#include <stdio.h>

int main(void){
    int numero = 13;
    printf("O valor do número é %d\n", numero);
    return 0;
}
```

- O programa irá imprimir a mensagem *“O valor do número é 13”* na **tela** e **saltar uma linha**.
- Observe que o **nome da variável** está **separada** da mensagem com `especificador` por uma **vı́rgula**.

#### Especificadores: Inteiros com Sinal
| Tipo de Variável | Especificador  |
| :--------------: | :------------: |
| `short int`      | `%hd`          |
| `int`            | `%d`           |
| `long int`       | `%ld`          |
| `long long int`  | `%lld`         |
 
*Exemplo:* Impressão de Inteiros com Sinal

```c
#include <stdio.h>

int main(void){
    short int numero_short = -13;
    int numero_int = -45000;
    long int numero_long = 97000000000;
    long long int numero_long_long = -7613456789900;
    printf("O valor do numero_short é %hd\n", numero_short);
    printf("O valor do numero_int é %d\n", numero_int);
    printf("O valor do numero_long é %ld\n", numero_long);
    printf("O valor do numero_long_long é %lld\n", numero_long_long);
    return 0;
}
```

#### Especificadores: Inteiros sem Sinal
|     Tipo de Variável    | Especificador  |
| :---------------------: | :------------: |
| `unsigned short int`    | `%hu`          |
| `unsigned int`          | `%u`           |
| `unsigned long int`     | `%lu`          |
| `unsigned long long int`| `%llu`         |

*Exemplo:* Impressão de Inteiros sem Sinal
```c
#include <stdio.h>

int main(void){
    unsigned short int numero_short = 13;
    unsigned int numero_int = 45000;
    unsigned long int numero_long = 97000000000;
    unsigned long long int numero_long_long = 7613456789900;
    printf("O valor do numero_short é %hu\n", numero_short);
    printf("O valor do numero_int é %u\n", numero_int);
    printf("O valor do numero_long é %lu\n", numero_long);
    printf("O valor do numero_long_long é %llu\n", numero_long_long);
    return 0;
}
```

#### Impressão de Inteiros em Diferentes Bases
- Também é possı́vel imprimir números em **octal** e **hexadecimal**.
- Usamos os especificadores `%o` para octal e `%x` para hexadecimal.
- **Independente** do número ser positivo ou negativo, imprime-se o **padrão de bits** que **compõe** aquele número.

*Exemplo:* Impressão de Inteiros em Octal
```c
#include <stdio.h>

int main(void){
    short int numero_short = -13;
    int numero_int = -45000;
    long int numero_long = 97000000000;
    long long int numero_long_long = -7613456789900;
    printf("O valor do numero_short em octal é %ho\n", numero_short);
    printf("O valor do numero_int em octal é %o\n", numero_int);
    printf("O valor do numero_long em octal é %lo\n", numero_long);
    printf("O valor do numero_long_long em octal é %llo\n", numero_long_long);
    return 0;
}
```

*Exemplo:* Impressão de Inteiros em Hexadecimal
```c
#include <stdio.h>

int main(void){
    short int numero_short = -13;
    int numero_int = -45000;
    long int numero_long = 97000000000;
    long long int numero_long_long = -7613456789900;
    printf("O valor do numero_short em hexa é %hx\n", numero_short);
    printf("O valor do numero_int em hexa é %x\n", numero_int);
    printf("O valor do numero_long em hexa é %lx\n", numero_long);
    printf("O valor do numero_long_long em hexa é %llx\n", numero_long_long);
    return 0;
}
```

### Impressão de Reais

#### %f
- Tanto a impressão de números `float` quanto `double` pode ser feita
através do **especificador** `%f`.
- Motivo: números float são **convertidos** para double na hora da **impressão**.

*Exemplo:* Impressão de Reais
```c
#include <stdio.h>

int main(void) {
    float pi = 3.141592;
    double e = 2.718281828459045; 
    printf("O valor de pi é %f\n", pi);
    printf("O valor de e é %f\n", e);
    return 0;
}
```

#### %.Nf
- Por padrão, a precisão da impressão de números reais é **6 casas decimais** depois da vı́rgula.
- É possı́vel **especificar** a **quantidade de dı́gitos** depois da vı́rgula através do especificador `%.Nf`, em que `N` representa esta quantidade.
- Claro que isto está limitado pela precisão do tipo em questão.

#### %e
- Os especificadores `%e` e `%E` podem ser utilizados para imprimir os números em **notação cientı́fica**.
- Também podem ser acompanhados do **especificador de precisão**.

*Exemplo:* Impressão em Notação Científica
```c
#include <stdio.h>

int main(void) {
    float pi = 3.141592;
    double e = 2.718281828459045; 
    printf("O valor de pi é %.6e\n", pi);
    printf("O valor de e é %.10E\n", e);
    return 0;
}
```

### Impressão de Caracteres

#### %c
- Para imprimir um **caractere**, ou simplesmente o **caractere associado** a um **inteiro** pela `tabela ASCII`, usamos o modificador `%c`.

*Exemplo:* Impressão de Caracteres
```c
#include <stdio.h>

int main(void) {
    char letra = 'A';
    char numero = 65;
    printf("O valor de letra é %c\n", letra);
    printf("O caractere associado ao número 65 é %c\n", numero);
    return 0;
}
```

#### %hhd e %hhu
- Para imprimir o **inteiro** de uma variável tipo `char`, utilizamos o especificador `%hhd`.
- No caso de variáveis do tipo `unsigned char`, usa-se o especificador `%hhu`.

*Exemplo:* Impressão Inteiro do Caractere
```c
#include <stdio.h>

int main(void) {
    char num_1 = -40;
    unsigned char num_2 = 156;
    printf("O valor de num_1 é %hhd\n", num_1); 
    printf("O valor de num_2 é %hhu\n", num_2); 
    return 0;
}
```

### Impressão de Palavras
- Através do especificador `%s` é possı́vel instruir o `printf` a imprimir **palavras**.

*Exemplo:* Impressão de Palavras
```c
#include <stdio.h>

int main(void) {
    printf("Olá, meu nome é %s\n", "Lucas");
    return 0;
}
```

### Caracteres de Escape
- Alguns **sı́mbolos especiais** como `\`, `%` e `”` são utilizados no `printf`.
- Para imprimir algum destes sı́mbolos na tela utiliza-se uma **sequência de escape**.

*Exemplo:* Caracteres de Escape
```c
#include <stdio.h>

int main (void) {
    printf("Imprimindo o símbolo de contrabarra: \\\n");
    printf("Imprimindo o símbolo de porcentagem: %%\n");
    printf("Imprimindo o símbolo de aspas duplas: \"\n");
    return 0;
}
```

### Imprimindo Múltiplos Valores
- O comando `printf` aceita **múltiplos argumentos**, isto é, com um único comando é possı́vel imprimir **diversos valores**.
- Basta utilizar os especificadores corretos e **separar as variáveis** por `vı́rgula`.

*Exemplo:* Impressão de Múltiplos Valores
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    printf("O valor de a é %d, o valor de b é %d e o valor de c é %d\n", a, b, c);
    return 0;
}
```

## Entrada

### scanf
- Para conseguir **ler dados** e **armazená-los** às variáveis, utilizamos o comando `scanf`.
- Funciona de maneira muito parecida ao `printf`.
- Através dos **especificadores**, os **mesmos** utilizados no `printf`, indicamos o **tipo da variável** que está sendo lida.
- **Observação:** para o tipo `double`, devemos utilizar o especificador `%lf`.
- Assim com o `printf`, é possı́vel realizar **várias leituras** com um único comando `scanf`.
- **Importante:** o nome das variáveis deve ser **precedido do operador** `&`, pois na verdade o `scanf` deve receber o **endereço da variável**, para que ele possa **modificar** o valor da mesma.

*Exemplo1:* Scanf
```c
#include <stdio.h>

int main(){
    char c;
    int num;
    double num_real;

    printf("Dígite um caractere: ");
    scanf("%c", &c);
    printf("Dígite um número inteiro: ");
    scanf("%d", &num);
    printf("Dígite um número real: ");
    scanf("%lf", &num_real);
    printf("Os valores digitados foram: %c %d %f\n", c,num,num_real);
    return 0;
}
```

*Exemplo2:* Scanf
```c
#include <stdio.h>

int main(){
    char c;
    int num;
    double num_real;
    scanf("%c %d %lf", &c, &num, &num_real);
    printf("Os valores digitados foram: %c %d %.3f\n", c, num, num_real);
    return 0;
}
```

## Expressões Aritméticas
- Uma `variável` ou `constante` são consideradas **expressões aritméticas**.
- Uma expressão aritmética também pode envolver, além de variáveis, `operadores aritméticos`, tais como:
    - Adição;
    - Subtração;
    - Multiplicação;
    - Divisão;
    - Resto;
- Através das expressões aritméticas podemos realizar **cálculos**.

| **Operador** | **Significado** | **Exemplo** |
| :----------: | :-------------: | :---------: |
|      +       |      Adição     |    a + b    |
|      -       |    Subtração    |    a - b    |
|      *       |  Multiplicação  |    a * b    |
|      /       |     Divisão     |    a / b    |
|      %       |      Resto      |    a % b    |
 
*Exemplo:* Adição
```c
#include <stdio.h>

int main(void) {
    int a = 2, b = 5;
    int c = a + b;
    printf("O valor de c é: %d\n", c);
    return 0;
}
```

*Exemplo:* Subtração
```c
#include <stdio.h>

int main(void) {
    int a = 2, b = 5;
    int c = a - b;
    printf("O valor de c é: %d\n", c);
    return 0;
}
```

*Exemplo:* Multiplicação
```c
#include <stdio.h>

int main(void) {
    int a = 2, b = 5;
    int c = a * b;
    printf("O valor de c é: %d\n", c);
    return 0;
}
```

*Exemplo:* Divisão
```c
#include <stdio.h>

int main(void) {
    int a = 2, b = 5;
    int c = a / b;
    printf("O valor de c é: %d\n", c);
    return 0;
}
```

### Divisão Inteira
- Quando os **dois parâmetros** da divisão são `inteiros`, realiza-se a `divisão inteira`.
- Apenas a **parte inteira** é **computada**, a parte fracionária é desprezada.
- Se **pelo menos um** dos parâmetros é `ponto flutuante`, adota-se a **divisão fracionária**.
- Note que, se o **retorno** de uma divisão fracionária for para uma **variável inteira**, a parte fracionária será **desprezada** de qualquer forma, então, o retorno de uma divisão fracionária deve ser atribuı́da a uma variável do tipo `float` ou `double`.

*Exemplo:* Divisão entre Reais
```c
#include <stdio.h>

int main(void) {
    double a = 2, b = 5;
    double c = a / b;
    printf("O valor de c é: %.2f\n", c);
    return 0;
}
```

*Exemplo:* Resto da Divisão
```c
#include <stdio.h>

int main(void) {
    int a = 23, b = 5;
    int c = a % b;
    printf("O valor de c é: %d\n", c);
    return 0;
}
```

> [!IMPORTANT]
>
> Apenas aplicável quando os argumentos são inteiros.

*Exemplo:* Resto Negativo
```c
#include <stdio.h>

int main(void) {
    int a = -23, b = 5;
    int c = a % b;
    printf("O valor de c é: %d\n", c);
    return 0;
}
```

### Precedência
- Assim como na aritmética convencional, alguns operadores da C, possuem precedência sobre outros.
- Considerando o sentido da **esquerda para a direita**, a seguinte ordem de precedência é adotada:
    1. `*` e `/`.
    2. `%`.
    3. `+` e `-`.
- *Exemplos:*
    1. `5 * 3 + 2 = 17`
    2. `5 * 6 / 3 - 3 = 7`
    3. `5 + 4 % 3 = 6`
    4. `5 * 4 % 3 + 2 = 4`
- Assim como na aritmética convencional, podemos usar os **parênteses** para **especificar a ordem** na qual as expressões devem ser avaliadas.
- Além deste ponto principal, o uso de parênteses também deixa o código mais **legı́vel**.
- Podemos elaborar expressões mais complicadas pensando mais naturalmente.
- *Exemplo:* `((5+3)/2)*((13 % 4)+1) = 8`

### Atribuição Simplificada
- Frequentemente nos deparamos com expressões que **reescrevem** valores de uma variável quando ela **depende do valor antigo**.
- *Exemplo:* `a = a * 2`.
- Se o valor de **a é 3**, o novo valor de a passará a ser **6 após a execução** desta linha.
- Como este tipo de operação é muito comum, podemos escrever de maneira abreviada: `a *= 2`.

| Atribuição | Atribuição Simplificada |
|-----------------|------------------|
| `a = a + b`     | `a += b`         |
| `a = a - b`     | `a -= b`         |
| `a = a * b`     | `a *= b`         |
| `a = a / b`     | `a /= b`         |
| `a = a % b`     | `a %= b`         |

### Incremento e Decremento
- Duas outras operações muito comuns são as operações de `incremento` e `decremento`: isto é, **aumentar 1** ou **diminuir 1** de um valor inteiro.
- Usamos os operadores `++` e `--`.
    - `a = a + 1` ≡ `a++` ≡ `++a`.
    - `a = a - 1` ≡ `a--` ≡ `--a`.
- Podem haver **diferenças** caso os operadores sejam usados de forma `prefixada` ou `pós-fixada` em expressões mais complexas.
- `Pré-fixada:` **Primeiro incrementa-se** o valor da variável e **depois avalia-se** a expressão.
- `Pós-fixada:` **Primeiro avaliamos** a expressão e **depois incrementamos** o valor da variável.

*Exemplo:* Pré-Fixada
```c
#include <stdio.h>

int main(void) {
    int a = 2;
    int b = ++a + 2;
    printf("O valor de a é %d e o valor de b é %d\n", a, b); // 3 e 5
    return 0;
}
```

*Exemplo:* Pós-Fixada
```c
#include <stdio.h>

int main(void) {
    int a = 2;
    int b = a++ + 2;
    printf("O valor de a é %d e o valor de b é %d\n", a, b); // 3 e 4
    return 0;
}
```

### Conversão de Tipos (`cast`)
- Na linguagem C a conversão de tipos pode ser **implı́cita** ou **explı́cita**.
- Na conversão implı́cita, caso atribua-se um valor para uma variável de **tipo diferente**, ela pode ser convertida **sem prejuı́zo de informação** ou com alguma perda.
    - Por exemplo: caso queiramos atribuir um **número fracionário** a uma
    variável `int`, haverá uma perda, pois haverá *truncamento* do número
    inteiro.
    - O contrário pode ocorrer **sem problemas**, já que o tipo `double`
    **suporta** todos os inteiros.

*Exemplo:* Conversão Implícita
```c
#include <stdio.h>

int main() {
    int a = 5;
    double b = a;
    printf("%d %lf\n", a, b);

    b = 9.74;
    a = b;
    printf("%d %lf\n", a, b);
    return 0;
}
```

- É possı́vel também indicar como uma determinada expressão deve ser avaliada explicitamente.
- Útil para realizar **divisões fracionárias** em vez de divisões inteiras.

*Exemplo:* Conversão Explícita
```c
#include <stdio.h>

int main(void) {
    int a = 5, b = 2;
    printf("O valor da divisão 5/2 = %.2f\n", (double) a/b);
    return 0;
}
```
