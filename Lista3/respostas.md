01. a) No while, a condição é testada antes do corpo, que pode executar zero vezes. No do-while, é testada depois, e o corpo executa no mínimo uma vez.
b) for: número de repetições conhecido ou controlado por contador. while: número de repetições desconhecido, parada por evento, com possibilidade de zero execuções. do-while: o corpo precisa rodar ao menos uma vez, como em validação de entrada e menus.
c) É erro de lógica, não de compilação. O ; é uma instrução vazia que vira o corpo do laço. Se condicao for verdadeira e nada a alterar, o programa fica preso em laço infinito e nunca passa para o bloco seguinte.

02. a) soma foi declarada dentro do bloco do for. Seu escopo termina na } do laço, então no printf o identificador não existe.
b) int soma = 0; é recriada e zerada a cada iteração. Por isso soma guardaria apenas i * i da volta atual, sem acumular.
c) Visibilidade é onde nome pode ser usado. Escopo de bloco vai do começo da declaração "{" até o final "}". Tempo de vida é o período em que a variável existe.

03. a)
36
18
9
4
2
1
b) O laço lê um caractere por vez com getch() e imprime o caractere seguinte na tabela ASCII, até digitar X. Os parênteses são necessários porque != tem precedência maior que =. Sem eles, ch receberia o resultado da comparação (0 ou 1) em vez do caractere lido.
c) Com break dentro de uma condição, com return (encerra a função), ou com exit().

04. a) O break encerra imediatamente o laço e o fluxo continua na primeira instrução após ele.
b) O continue descarta o restante do corpo da iteração atual e passa à próxima. No for, a expressão executada logo após o continue é o incremento, seguido do teste.
c) Apenas o laço interno é interrompido. O laço externo continua.

05. a) 5 iterações. Os pares (i, j) são (0,10), (1,9), (2,8), (3,7) e (4,6). Em (5,5) a condição i < j falha.

b)
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
c)

int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

06. a) x = 6
b) O teste compara o valor atual de x e só depois incrementa. Sequência: 0<5 (x vira 1), 1<5 (2), 2<5 (3), 3<5 (4), 4<5 (5) e 5<5 é falso, mas o incremento ainda ocorre (x vira  O laço termina com x = 6.
c)

int x = 0;
while (x < 5) {
    x++;
}
x++;
printf("Valor final de x = %d\n", x);

