#include <stdio.h>

int main(void) {
    int total, pago, troco, restante;
    int cedulas100, cedulas50, cedulas20, cedulas10, cedulas5, cedulas2;

    printf("Valor a pagar (inteiro positivo): R$ ");
    if (scanf("%d", &total) != 1 || total <= 0) {
        printf("Valor inválido.\n");
        return 1;
    }
    printf("Valor entregue (inteiro positivo): R$ ");
    if (scanf("%d", &pago) != 1 || pago <= 0) {
        printf("Valor inválido.\n");
        return 1;
    }
    if (pago < total) {
        printf("Erro: valor entregue insuficiente.\n");
        return 1;
    }

    troco = pago - total;
    restante = troco;
    cedulas100 = restante / 100; restante %= 100;
    cedulas50 = restante / 50; restante %= 50;
    cedulas20 = restante / 20; restante %= 20;
    cedulas10 = restante / 10; restante %= 10;
    cedulas5 = restante / 5; restante %= 5;
    cedulas2 = restante / 2; restante %= 2;

    printf("Troco: R$ %d\n", troco);
    printf("Cédulas de R$ 100: %d\n", cedulas100);
    printf("Cédulas de R$ 50: %d\n", cedulas50);
    printf("Cédulas de R$ 20: %d\n", cedulas20);
    printf("Cédulas de R$ 10: %d\n", cedulas10);
    printf("Cédulas de R$ 5: %d\n", cedulas5);
    printf("Cédulas de R$ 2: %d\n", cedulas2);
    if (restante != 0) {
        printf("Não é possível compor R$ %d usando apenas as cédulas disponíveis.\n", restante);
    }

    return 0;
}
