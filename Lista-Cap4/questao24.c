#include <stdio.h>

int main(void) {
    int a, b, c, soma;

    printf("Digite os três ângulos inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) {
        printf("Ângulos inválidos.\n");
        return 1;
    }

    soma = a + b + c;
    if (soma != 180) {
        printf("Os ângulos não formam um triângulo válido (soma diferente de 180°).\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triângulo retângulo.\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triângulo obtusângulo.\n");
    } else {
        printf("Triângulo acutângulo.\n");
    }

    return 0;
}
