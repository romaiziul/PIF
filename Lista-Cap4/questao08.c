#include <stdio.h>

int main(void) {
    int ano;

    printf("Digite um ano positivo: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {
        printf("Ano inválido.\n");
        return 1;
    }

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d é bissexto.\n", ano);
    } else {
        printf("%d não é bissexto.\n", ano);
    }

    return 0;
}
