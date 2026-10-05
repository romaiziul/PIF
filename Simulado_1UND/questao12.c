#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota inválida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota válida registrada: %.1f\n", nota);
    return 0;
}