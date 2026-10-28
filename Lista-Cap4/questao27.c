#include <stdio.h>

int main(void) {
    int horas;
    double valor;

    printf("Horas inteiras de permanência: ");
    if (scanf("%d", &horas) != 1 || horas < 1) {
        printf("Informe pelo menos uma hora inteira.\n");
        return 1;
    }

    if (horas <= 2) {
        valor = horas * 2.0;
    } else if (horas <= 4) {
        valor = 2 * 2.0 + (horas - 2) * 2.5;
    } else {
        valor = 2 * 2.0 + 2 * 2.5 + (horas - 4) * 3.0;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor do ticket: R$ %.2f\n", valor);
    return 0;
}
