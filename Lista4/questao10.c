#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("O número é PAR.\n");
    } else {
        printf("O número é ÍMPAR.\n");
    }

    if (numero > 0) {
        printf("O número é POSITIVO.\n");
    } else if (numero < 0) {
        printf("O número é NEGATIVO.\n");
    } else {
        printf("O número é ZERO.\n");
    }

    return 0;
}
