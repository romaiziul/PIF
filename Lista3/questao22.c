#include <stdio.h>

int main() {
    int n, linha, coluna, numero = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }
    return 0;
}