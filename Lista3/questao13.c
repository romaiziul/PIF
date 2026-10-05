#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: fatorial não definido para negativos.\n");
        return 1;
    }

    for (i = 2; i <= n; i++) fatorial *= i;
    printf("%d! = %lld\n", n, fatorial);
    return 0;
}