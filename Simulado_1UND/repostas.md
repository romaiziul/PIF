01. C

02. Ponto e vírgula após biblioteca <stdlib.h>, Main com primeira letra maiúscula, printf( A idade do aluno eh: %d anos.. , idade); sem aspas duplas para indicar o texto correto seria printf(" A idade do aluno eh: %d anos.. ", idade);

03.
int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a = ?
b *= c = d - 2; // Valores finais de b e c = ?
d %= a + 3; // Valor final de d = ?
a += b += c += 5; // Valores finais de a, b e c = ?

a +=  4 + 5 a+= 9 2 += 9 a = 11 
b *= c = d -2 
c = 10 -2 = 8 
b *= 8; 4 *= 8; b = 32; c = 8 
d %= a + 3; 11 + 3 = 14; 10 %= 14; d = 10
a += b += c += 5
c += 5; 8 + 5 c = 13
b += c; 32 + 13; b = 45 
a += b; 11 += 45; a = 56

04. int i = 2, j = 3, k = 0
float x = 2.5, y = 5.0.

a) i < j + 2 => Resultado: 1
2 < 3 + 2; 2 < 5 = V
b) 2 * i - 5 <= j - 4 => Resultado: 1
2 * 2 - 5 <= 3 - 4 
4 - 5 <= -1 
-1 <= -1 
c) !k && (x + y >= 7.5) => Resultado: 1
!0 && (2.5 + 5.0 >= 7.5 => 
1 && (7.5 >= 7.5) => 
1 && 1 => 1
d) !(i == j) || (y / x == 2.0) => Resultado: 1
!(2 == 3) || (5.0 / 2.5 == 2.0) =>
!(0) || (1) => 
1 || (1) => 1 
e) i == 2 && j == 4 || k == 0 => Resultado: 1
2 == 2 && 3 == 4 || 0 == 0 => 
1 && 0 || 1 => 1

05. a) A diferença essencial do while e do-while é que no While a condição é testada antes do corpo, então o bloco pode executar zero vezes, caso a primeira opção ja seja falsa. Já no do-while, a condição é testada depois do corpo, fazendo com que o bloco execute pelo menos uma vez, mesmo que a primeira opção seja falsa.
b) Quando o número de repetições é conhecido ou controlado por um contador.
O for reúne inicialização, condição e incremento numa única linha, o que deixa o controle do laço visível de uma vez e evita esquecer o incremento (causa clássica de laço infinito em while).
c) Erro de Lógica, compila normalmente, o while com o ";" é uma instrução vazia, ocupando o espaço de corpo do laço.
Se a condição for true, o programa vai ficar gerar um laço infinito.

06. a) "soma" foi compilada dentro do bloco for, não há a variável "soma" fora do bloco, logo, ele não existe fora do for, o que gera o erro "soma" undeclared.
b)O laço executa i = 1 a 10, mas com desvios. Para i = 1, 2, 3 e 4 o corpo roda inteiro. Em i = 5, o continue pula o restante do corpo e vai direto ao incremento (i++), então a iteração 5 é descartada. Em i = 6 e 7 o corpo roda normalmente. Em i = 8, o break encerra o laço imediatamente, e 8, 9 e 10 nunca são executados. Além disso, int soma = 0; dentro do bloco reinicializa a variável a cada iteração, então mesmo que o escopo fosse válido, o acúmulo seria perdido.
c)
