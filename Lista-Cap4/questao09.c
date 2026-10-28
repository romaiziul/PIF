#include <stdio.h>

int main(void) {
    double trabalho, avaliacao, exame, media;

    printf("Nota do Trabalho de Laboratório (0 a 10): ");
    if (scanf("%lf", &trabalho) != 1 || trabalho < 0.0 || trabalho > 10.0) {
        printf("Nota inválida.\n");
        return 1;
    }
    printf("Nota da Avaliação Semestral (0 a 10): ");
    if (scanf("%lf", &avaliacao) != 1 || avaliacao < 0.0 || avaliacao > 10.0) {
        printf("Nota inválida.\n");
        return 1;
    }
    printf("Nota do Exame Final (0 a 10): ");
    if (scanf("%lf", &exame) != 1 || exame < 0.0 || exame > 10.0) {
        printf("Nota inválida.\n");
        return 1;
    }

    media = (trabalho * 2.0 + avaliacao * 3.0 + exame * 5.0) / 10.0;
    printf("Média ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situação: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Aprovado\n");
    }

    return 0;
}
