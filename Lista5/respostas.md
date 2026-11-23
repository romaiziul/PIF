01. a) O protótipo é `float celsius(float);`: informa ao compilador o tipo de retorno e o parâmetro esperado. A chamada é `c = celsius(f);`: executa a função passando f. A definição é `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }`: contém a implementação da conversão.
b) O protótipo permite verificar quantidade e tipos dos argumentos antes de conhecer a implementação. Sem declaração anterior à chamada, o código é inválido em C moderno e o compilador deve emitir um diagnóstico; não é seguro pressupor parâmetros e retorno.
c) O tipo da função é float, pois ela retorna um valor float. O tipo do retorno descreve o resultado fornecido ao chamador; os tipos dos parâmetros descrevem os valores de entrada.

02. a) Um return devolve diretamente um valor. O programador tentou devolver soma e média ao mesmo tempo, mas `return soma, media;` utiliza o operador vírgula: avalia soma e depois media, devolvendo apenas media.
b) `return;` encerra antecipadamente a função void, sem devolver valor. Não é obrigatório no final de uma função void, pois ela termina ao alcançar o fim do bloco.
c) Uma solução com resultados separados é:

int calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}

Cada função devolve um único inteiro diretamente por return. Para devolver vários resultados por uma única função, outras possibilidades incluem ponteiros ou estruturas.

03. a) `void exibe_mensagem(char* msg);` recebe um ponteiro para char e não devolve valor. `int obter_codigo(void);` não recebe argumentos e devolve int. `void limpar_tela(void);` não recebe argumentos nem devolve valor.
b) Uma função com retorno fornece um resultado para outra parte do programa, como calcular uma soma. Um procedimento void apenas realiza uma ação, como exibir uma mensagem.
c) `x = limpar_tela();` é inválido: como limpar_tela retorna void, não existe valor para atribuir a x. A chamada correta é `limpar_tela();`.

04. a) O caso base é `n == 0`, que retorna 1. O passo recursivo é `n * fatorial(n - 1)`. Sem o caso base, as chamadas não teriam uma condição adequada de parada e poderiam estourar a pilha.
b) Empilhamento: fatorial(4) chama fatorial(3), que chama fatorial(2), que chama fatorial(1), que chama fatorial(0). No caso base, fatorial(0) devolve 1. Desempilhamento: fatorial(1) devolve 1; fatorial(2) devolve 2; fatorial(3) devolve 6; fatorial(4) devolve 24.
c) Cada chamada cria um novo registro na pilha com parâmetros, informações locais e ponto de retorno. O desempilhamento ocorre quando as chamadas terminam. Uma recursão sem condição de parada pode ocupar toda a memória destinada à pilha e causar falha.

05. a) `SQR(2+3)` imprime 25, pois vira `((2+3)*(2+3))`. `DOBRO(2+3)` imprime 11, pois vira `2+3*2` e a multiplicação tem precedência maior que a adição. Os parênteses evitam essa mudança de significado.
b) #define é uma diretiva do pré-processador, encerrada pelo fim da linha, e não precisa de ponto e vírgula. Identificadores em maiúsculas são convenção para distinguir macros e constantes.
c) `#define PRN (n) printf("%d", n)` tem um espaço entre PRN e o parêntese, portanto não define uma macro com parâmetros. O correto é `#define PRN(n) printf("%d", (n))`. Uma macro substitui texto no pré-processamento, ao passo que uma função recebe argumentos segundo tipos declarados e executa seu código durante o programa.

06. a) `#include <stdio.h>` costuma buscar um cabeçalho da biblioteca padrão nos diretórios configurados do compilador. `#include "areas.h"` procura um cabeçalho do projeto, em geral começando pelo local do arquivo que faz a inclusão, conforme as regras do compilador.
b) `#undef SOMA` cancela a definição dessa macro nas linhas seguintes. `#undef SOMA(x,y)` não é a forma correta: #undef recebe somente o nome da macro.
c) Sem DEBUG definido, o trecho do #else é selecionado e imprime `Modo normal`, desde que esteja em um contexto executável, como dentro de main(). A seleção é feita no pré-processamento. As diretivas não são instruções executadas pelo programa e não permanecem como tais no executável.
