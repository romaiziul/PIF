#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) divisores++;
    }

    printf("Divisores encontrados: %d\n", divisores);
    if (divisores == 2) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }
    return 0;
}