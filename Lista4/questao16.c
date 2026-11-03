#include <stdio.h>

int main(void) {
    float distancia, litros, consumo;

    printf("Distância percorrida em km: ");
    if (scanf("%f", &distancia) != 1 || distancia < 0.0f) {
        printf("Distância inválida.\n");
        return 1;
    }
    printf("Litros de gasolina consumidos: ");
    if (scanf("%f", &litros) != 1 || litros <= 0.0f) {
        printf("A quantidade de litros deve ser maior que zero.\n");
        return 1;
    }

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0f) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0f) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }

    return 0;
}
