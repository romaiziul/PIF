#include <stdio.h>

int ehPrimo(int n) {
    int i, divisores = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) divisores++;
    }
    return divisores == 2;
}

int main() {
    int a, b, i;
    long long soma = 0;

    do {
        printf("Digite A e B (A < B, positivos): ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a >= b);

    for (i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma dos primos: %lld\n", soma);
    return 0;
}