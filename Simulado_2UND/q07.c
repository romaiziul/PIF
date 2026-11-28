/* Questao 07 - Simulado PIF */
#include <stdio.h>
int ehPrimo(int n);
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    for (int i = 1; i <= n; i++)
        if (ehPrimo(i)) printf("%d\n", i);
    return 0;
}
int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0) return 0;
    return 1;
}
