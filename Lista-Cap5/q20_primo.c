#include <stdio.h>
int ehPrimo(int n);
int main(void) {
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    if (ehPrimo(n)) printf("%d e primo.\n", n);
    else printf("%d nao e primo.\n", n);
    printf("Primos de 1 a 50: ");
    for (int i = 1; i <= 50; i++)
        if (ehPrimo(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0) return 0;
    return 1;
}
