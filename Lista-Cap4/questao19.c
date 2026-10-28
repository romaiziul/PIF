#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Digite os três lados: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0.0 || b <= 0.0 || c <= 0.0) {
        printf("Lados inválidos.\n");
        return 1;
    }

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo isósceles.\n");
        } else {
            printf("Triângulo escaleno.\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;
}
