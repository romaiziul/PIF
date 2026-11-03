#include <stdio.h>

int main(void) {
    int opcao;
    double entrada, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma conversão: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Opção inválida.\n");
        return 1;
    }
    printf("Digite a temperatura: ");
    if (scanf("%lf", &entrada) != 1) {
        printf("Temperatura inválida.\n");
        return 1;
    }

    switch (opcao) {
        case 1: resultado = entrada * 1.8 + 32.0; break;
        case 2: resultado = entrada + 273.15; break;
        case 3: resultado = (entrada - 32.0) / 1.8; break;
        case 4: resultado = entrada - 273.15; break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    printf("Temperatura convertida: %.2f\n", resultado);
    return 0;
}
