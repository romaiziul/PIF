#include <stdio.h>
int somaDigitos(int n);
int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }
    printf("Soma dos digitos = %d\n", somaDigitos(n));
    return 0;
}
int somaDigitos(int n) {
    if (n < 10) return n; /* Caso base */
    return n % 10 + somaDigitos(n / 10); /* Passo recursivo */
}
