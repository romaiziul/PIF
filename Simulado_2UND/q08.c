/* Questao 08 - Simulado PIF */
#include <stdio.h>
int somaDigitos(int n);
long potencia(int base, int exp);
int main(void) {
    int n, base, exp;
    if (scanf("%d %d %d", &n, &base, &exp) != 3 || exp < 0) return 1;
    printf("Soma: %d\n", somaDigitos(n));
    printf("Potencia: %ld\n", potencia(base, exp));
    return 0;
}
int somaDigitos(int n) {
    if (n == 0) return 0;
    int digito = n % 10;
    if (digito < 0) digito = -digito;
    return digito + somaDigitos(n / 10);
}
/* Pressupoe resultado representavel em long. */
long potencia(int base, int exp) {
    if (exp == 0) return 1;
    long metade = potencia(base, exp / 2);
    if (exp % 2 == 0) return metade * metade;
    return metade * metade * base;
}
