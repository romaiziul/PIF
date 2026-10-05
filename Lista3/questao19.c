#include <stdio.h>

int main() {
    int n, i;
    long long a = 1, b = 1, prox;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("N deve ser maior ou igual a 1.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            printf("%lld ", 1LL);
        } else {
            prox = a + b;
            printf("%lld ", prox);
            a = b;
            b = prox;
        }
    }
    printf("\n");
    printf("Termo %d = %lld\n", n, (n <= 2) ? 1LL : b);
    return 0;
}