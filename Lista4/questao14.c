#include <stdio.h>

int main(void) {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0 a 10): ");
    if (scanf("%f", &nota) != 1 || nota < 0.0f || nota > 10.0f) {
        printf("Nota inválida.\n");
        return 1;
    }
    printf("Digite o número de faltas: ");
    if (scanf("%d", &faltas) != 1 || faltas < 0) {
        printf("Número de faltas inválido.\n");
        return 1;
    }

    if (nota >= 9.0f) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5f) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0f) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0f) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);
    return 0;
}
