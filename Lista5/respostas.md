01. a) O protótipo da função é float celsius(float);, que informa ao compilador o tipo de retorno e o parâmetro recebido. A chamada acontece em c = celsius(f);, quando a função é executada com o valor de f. A definição é float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }`, onde está o cálculo realizado pela função.

b) O protótipo permite ao compilador verificar se a função está sendo chamada com a quantidade e os tipos corretos de argumentos. Se fosse omitido e a função estivesse definida depois da `main()`, o compilador não teria sua declaração disponível no momento da chamada. Em versões modernas de C, isso gera um diagnóstico de erro, pois uma função deve ser declarada antes de ser utilizada.

c) A função celsius() é do tipo float, pois retorna um valor real utilizando o comando return. O tipo de uma função é determinado pelo valor que ela devolve ao programa, enquanto os parâmetros indicam apenas os dados que ela recebe para realizar o processamento.

02. a) Uma função em C pode devolver diretamente apenas um valor por meio de return. O programador pretendia retornar a soma e a média dos três números. Porém, em return soma, media;, o operador vírgula avalia as duas expressões e o resultado retornado é apenas `media`. Portanto, a função não devolve os dois valores como pretendido.

b) O comando return; encerra imediatamente a execução da função imprime_mensagem() sem devolver um valor. Nesse exemplo, quando `erro` é negativo, a mensagem de erro é impressa e a função termina. Ele não é obrigatório no final de uma função `void`, pois a execução termina automaticamente ao chegar à última instrução.

c) As funções podem ser reescritas da seguinte forma:

int calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}

A primeira função retorna apenas a média inteira dos três valores, enquanto a segunda retorna somente a soma. Utilizando apenas o return para devolver diretamente resultados, são necessárias duas funções para obter esses dois valores separadamente. Também seria possível utilizar ponteiros ou uma estrutura para disponibilizar múltiplos resultados.

03. a) A função void exibe_mensagem(char* msg); recebe um parâmetro do tipo ponteiro para char e não retorna valor. A função int obter_codigo(void); não recebe parâmetros e retorna um inteiro. Já void limpar_tela(void); não recebe parâmetros e não retorna nenhum valor.

b) Uma função com retorno devolve um resultado que pode ser armazenado em uma variável ou utilizado em uma expressão. Por exemplo, uma função que calcula a soma de dois números. Uma função void, também chamada de procedimento, executa uma tarefa sem devolver um resultado diretamente, como imprimir uma mensagem na tela.

c) Não. A chamada x = limpar_tela(); é inválida porque limpar_tela() é do tipo void e não retorna nenhum valor para ser atribuído à variável x. A forma correta de chamá-la é limpar_tela();.

04. a) O caso base é n == 0, quando a função retorna 1 e encerra a recursão. O passo recursivo é n * fatorial(n - 1), que chama a própria função com um valor menor. Sem o caso base, as chamadas continuariam indefinidamente até provocar um possível estouro da pilha de execução.

b) O rastreamento de fatorial(4) ocorre em duas etapas.

Empilhamento:
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1

Desempilhamento:

fatorial(0) = 1
fatorial(1) = 1 * 1 = 1
fatorial(2) = 2 * 1 = 2
fatorial(3) = 3 * 2 = 6
fatorial(4) = 4 * 6 = 24

Resultado final é 24.

c) A cada chamada recursiva, uma nova informação de execução é armazenada na pilha, incluindo os parâmetros e o ponto para onde a função deve retornar. Quando o caso base é alcançado, as chamadas começam a ser finalizadas na ordem inversa. Se não existir um caso base adequado, a pilha pode continuar crescendo até esgotar a memória disponível, causando uma falha no programa.

05. a) A primeira instrução imprime 25, pois SQR(2+3) é expandida para ((2+3)*(2+3)), resultando em 5 * 5. A segunda imprime 11, pois DOBRO(2+3) é expandida para 2+3*2, e a multiplicação é realizada antes da soma. A diferença acontece porque SQR utiliza parênteses de proteção, enquanto DOBRO não utiliza.

b) A diretiva #define não termina com ponto e vírgula porque é uma instrução do pré-processador, e não um comando comum da linguagem C. Por convenção, utilizamos nomes em letras maiúsculas para facilitar a identificação de constantes e macros e diferenciá-las de variáveis e funções.

c) A definição #define PRN (n) printf("%d", n) está incorreta como macro com argumento porque existe um espaço entre PRN e (. Dessa forma, ela é interpretada como uma macro sem parâmetros. A forma correta é: #define PRN(n) printf("%d", (n)). Uma macro com argumentos realiza substituição de texto durante o pré-processamento, enquanto uma função comum recebe argumentos e executa seu código durante a execução do programa. Além disso, funções permitem verificação de tipos dos parâmetros, enquanto macros não realizam essa verificação da mesma maneira.

06. a) A diretiva #include <stdio.h> é utilizada normalmente para incluir arquivos de cabeçalho da biblioteca padrão da linguagem C. Já #include "areas.h" é utilizada para incluir um arquivo de cabeçalho criado pelo programador, procurando inicialmente nos locais destinados aos arquivos do projeto.

b) A diretiva #undef SOMA remove a definição da macro SOMA, impedindo sua expansão nas partes seguintes do código. A forma #undef SOMA(x,y) está incorreta porque #undef recebe apenas o nome do identificador, sem a lista de parâmetros.

c) Se DEBUG não estiver definido, a mensagem impressa será Modo normal. Isso acontece porque #ifdef DEBUG verifica se o identificador foi definido e, caso não tenha sido, seleciona o trecho associado ao #else`. Essa decisão é tomada durante o pré-processamento, antes da compilação propriamente dita. As diretivas são processadas nessa etapa e não aparecem como instruções no executável final.
