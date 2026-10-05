#include <stdio.h>

int main() {
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int qtd[6] = {0, 0, 0, 0, 0, 0};
    int valor, resto, i;

    printf("Valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor < 2 || valor == 3) {
        printf("Valor inválido.\n");
        return 1;
    }

    resto = valor;
    if (resto % 10 == 1) {
        resto -= 11;
        qtd[4] += 1;
        qtd[5] += 3;
    } else if (resto % 10 == 3) {
        resto -= 13;
        qtd[4] += 1;
        qtd[5] += 4;
    }

    for (i = 0; i < 6; i++) {
        while (resto >= notas[i]) {
            resto -= notas[i];
            qtd[i]++;
        }
    }

    for (i = 0; i < 6; i++) {
        if (qtd[i] > 0) {
            printf("%d cédula(s) de R$ %d\n", qtd[i], notas[i]);
        }
    }
    return 0;
}