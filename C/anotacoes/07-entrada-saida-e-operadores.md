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

#### scanf
- Para conseguir** ler dados** e **armazená-los** às variáveis, utilizamos o comando `scanf`.
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

