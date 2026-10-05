#include <stdio.h>

int main() {
    int n, invertido = 0;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    printf("Invertido: %d\n", invertido);
    return 0;
}