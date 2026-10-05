#include <stdio.h>

int main() {
    float nota, maior, menor;
    float soma = 0;
    int total = 0;

    printf("Digite as notas (-1.0 para encerrar):\n");
    scanf("%f", &nota);
    while (nota != -1.0) {
        if (total == 0) {
            maior = nota;
            menor = nota;
        }
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
        soma += nota;
        total++;
        scanf("%f", &nota);
    }

    if (total == 0) {
        printf("Nenhuma nota digitada.\n");
    } else {
        printf("Total de alunos: %d\n", total);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Média: %.2f\n", soma / total);
    }
    return 0;
}