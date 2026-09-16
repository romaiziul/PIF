01.
a) 2
b) A variável "valor_inteiro" é do tipo int(inteiro) e está recebendo um valor do tipo float(decimal), logo como a varíavel so recebe inteiro, a parte decimal é excluída. O nome do fenômeno é conversão implícita de tipos
c) Resolve-se o problema usando uma variável do tipo float ou double, para arredondamento pode-se usar o round importado da biblioteca math.

02.
a)A biblioteca <conio.h> não faz parte do padrão ANSI C. Funções como getch() e getche() são dependentes de determinados compiladores e sistemas operacionais, prejudicando a portabilidade do programa.
b) getchar(); é usado para entrada e lê um caractere.
putchar(); é usado para saída e escreve um caractere.
c)#include <stdio.h>
#include <stdlib.h>

int main(void) {
char ch;

printf("\nPressione uma tecla ");
ch = getchar();
printf("\nA tecla sucessora ASCII é %c.\n", ch+1);
system("PAUSE");
return 0;
}

04.
a = 1
b = 2
c = 3
d = 4

a) a += b + c; Seguindo a ordem de precedência: b + c = 2 + 3 = 5, aplica na equação: a = 1 + 5 = 6
a=6

b) b *= c = d + 2; Segundo a ordem de precedência: d + 2 = 4 + 2 = 6, descobre-se: c = 6, aplica na equação: b = b * c: b = 2 * 6: 
b = 12

c)
d %= a + a + a; Substituindo a=6: a + a + a = 6 + 6 + 6 = 18, ficamos com: d = 4 % 18: 
d = 4
(obs: Sempre que o dividendo é menor que o que o divisor o resultado sempre vai ser o dividendo)

d)
d -= c -= b -= a; A precedência ocorre da direita pra esquerda, logo: b -= a: b = 12 - 6: b = 6, seguido por: c -= b: c = 6 - 6: c = 0
Por fim: d -= c: d = 4 - 0: 
d = 4

e)Com todos resultados descobertos, substitui-se e segue a ordem de precedência:
a += b += c += 7; da direita pra esquerda: c = 7 + 7 = 14: b = 6 + 14 = 20: a = 6 + 20 = 26

Resultado Final:
a = 26
b = 20
c = 14
d = 4

05. 
i == 1  → 1 
j == 2  → 1 
k == 3  → 1 
i < j  → 1 
j < k  → 1 
x > y  → 0 
x != y  → 1 
i + j < k  → 0 
i + j == k  → 1 
j + k > i  → 1 
i * j < k  → 1 
i * j == k  → 0 

06.
a) O ++ prefixado incrementa primeiro e depois utiliza o valor, causando a diferença no fluxo e na atribuição, os valores são: n = 6, x = 6. Já o ++ pós-fixado utiliza primeiro o valor e somente depois incrementa, logo, os valores são: y = 5, m = 6.
b) A variável "n" está sendo modificada por "n++" enquanto ainda é usada em outros argumentos, isso pode fazer com que ocorra comportamentos indefinidos.
