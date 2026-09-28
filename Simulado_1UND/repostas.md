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
