# Lista de Exercícios — Capítulo 5: Funções

Base conceitual: Treinamento em Linguagem C, de Victorine Viviane Mizrahi.

## Questão 1 — Anatomia de uma função

a) O protótipo é float celsius(float);: declara o nome, o tipo de retorno e os tipos dos parâmetros. A chamada é c = celsius(f);: executa a função passando f e armazena o resultado em c. A definição é float celsius(float fahr) { ... }: contém o cálculo e retorna o resultado.

b) O protótipo permite ao compilador conferir a chamada e os tipos dos argumentos. Sem ele, se a definição estiver depois de main, a chamada não tem uma declaração prévia adequada. Em C moderno isso exige diagnóstico do compilador; além disso, não se obtém a verificação correta dos parâmetros. Declare o protótipo antes de main.

c) celsius retorna float porque esse é o tipo do valor devolvido por return. Os parâmetros descrevem os dados recebidos; eles não determinam o tipo do resultado.

## Questão 2 — Comando return

a) Uma função devolve um valor por chamada usando return. Em return soma, media;, a vírgula é o operador vírgula: soma é avaliada primeiro e media é o valor efetivamente devolvido.

b) Em função void, return; encerra a função sem devolver valor. Não é necessário no final: ao chegar à chave de fechamento, a função void termina normalmente.

c) As funções podem ser:
int calcularMedia(int a, int b, int c) { return (a + b + c) / 3; }
int calcularSoma(int a, int b, int c) { return a + b + c; }
Cada chamada devolve apenas um valor; por isso, usamos funções distintas para obter média e soma.

## Questão 3 — Funções void, parâmetros e assinaturas

a) exibe_mensagem recebe uma string e não retorna valor. obter_codigo não recebe parâmetros e retorna int. limpar_tela não recebe parâmetros e não retorna valor.

b) Uma função com retorno calcula ou obtém um resultado que será usado pelo programa, como soma(a, b). Uma função void executa uma ação, como exibeMenu().

c) x = limpar_tela(); não é válido, pois limpar_tela é void e não produz valor para atribuição. A chamada correta é limpar_tela();.

## Questão 4 — Recursão

a) O caso base é n == 0, que retorna 1. O passo recursivo retorna n * fatorial(n - 1). Sem caso base, as chamadas continuariam até esgotar a pilha.

b) fatorial(4) empilha: fatorial(4) aguarda 4*fatorial(3); fatorial(3) aguarda 3*fatorial(2); fatorial(2) aguarda 2*fatorial(1); fatorial(1) aguarda 1*fatorial(0). fatorial(0) retorna 1. No desempilhamento: fatorial(1)=1; fatorial(2)=2; fatorial(3)=6; fatorial(4)=24.

c) Cada chamada cria uma ativação na pilha com seus parâmetros e dados locais. Ao alcançar o caso base, os resultados retornam pelas chamadas pendentes. Sem caso base, a pilha cresce até causar estouro e falha do programa.

## Questão 5 — #define, constantes e macros

a) A primeira chamada imprime 25, pois SQR(2+3) expande para ((2+3)*(2+3)). A segunda imprime 8, pois DOBRO(2+3) expande para 2+3*2, e a multiplicação tem precedência. %d é adequado para os resultados inteiros.

b) #define é uma diretiva do pré-processador, não uma instrução C terminada por ponto e vírgula. Um ponto e vírgula na macro pode ser inserido em cada uso e alterar a expressão. Maiúsculas são uma convenção para destacar macros e constantes simbólicas.

c) Em #define PRN (n) printf("%d", n), o espaço após PRN impede que a definição seja reconhecida como macro de argumento. Forma correta: #define PRN(n) printf("%d", (n)). A macro é substituída textualmente antes da compilação; a função recebe argumentos durante a execução e tem assinatura verificada conforme sua declaração.

## Questão 6 — Diretivas de pré-processamento

a) #include <stdio.h> procura o cabeçalho nos diretórios padrão do compilador. #include "areas.h" procura primeiro junto ao arquivo-fonte e depois nos caminhos configurados.

b) #undef SOMA remove a definição da macro SOMA. A diretiva recebe somente o nome da macro; #undef SOMA(x,y) é incorreto.

c) Sem DEBUG, o trecho seleciona Modo normal. A seleção acontece durante o pré-processamento, antes da compilação. As diretivas são processadas e não permanecem como instruções do executável. Os printf do exemplo devem estar dentro de uma função para o programa ser válido.

## Questões práticas

Cada questão prática tem um programa independente nos arquivos q07_soma.c a q28_mercadinho.c. Compile e execute um arquivo por vez.

## Questão 13 — Calculadora

A opção 4 valida se o divisor é zero antes de chamar divide.

## Questão 14 — Soma recursiva dos dígitos

O caso base ocorre quando resta apenas um dígito. O passo recursivo soma n % 10 a somaDigitos(n / 10).

## Questão 17 — Fatorial

O maior fatorial armazenável depende do tamanho de long no sistema. Valores acima do limite podem causar estouro numérico.

## Questão 19 — Contagem recursiva

Na contagem regressiva, printf ocorre antes da chamada recursiva. Na crescente, a chamada vem primeiro e printf ocorre durante o desempilhamento.

## Questão 23 — Macro versus função

A macro sem proteção expande DOBRO(2 + 3) para 2 + 3 * 2 e resulta em 8; a função recebe 5 e retorna 10. A macro protegida é ((x) * 2).

## Questão 24 — Compilação condicional

Para compilar sem depuração: gcc q24_debug.c -o q24. Para habilitar as mensagens: gcc -DDEBUG q24_debug.c -o q24_debug. Com DEBUG, imprime a soma parcial a cada iteração; sem DEBUG, esses comandos não entram na compilação.

## Questão 26 — Fibonacci

A versão recursiva recalcula repetidamente os mesmos termos e fica lenta para n grande. Além disso, long tem limite de armazenamento.

## Questão 28 — Caixa de mercadinho

No programa, a opção 1 representa pagamento à vista com 10% de desconto; as demais opções não aplicam desconto. Se o pagamento for menor que o total, o programa mostra o valor faltante.
