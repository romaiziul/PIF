#include <stdio.h>
long fatorialIterativo(int n);
long fatorialRecursivo(int n);
int main(void) {
    int n;
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Valor invalido.\n");
        return 1;
    }
    long a = fatorialIterativo(n);
    long b = fatorialRecursivo(n);
    printf("Iterativo = %ld\nRecursivo = %ld\n", a, b);
    printf("%s\n", a == b ? "Os resultados coincidem." : "Os resultados diferem.");
    return 0;
}
long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 2; i <= n; i++) resultado *= i;
    return resultado;
}
long fatorialRecursivo(int n) {
    if (n <= 1) return 1;
    return n * fatorialRecursivo(n - 1);
}
