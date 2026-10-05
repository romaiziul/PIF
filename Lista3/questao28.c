#include <stdio.h>

int main() {
    int opcao;
    double salario, resultado;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Salário atual: R$ ");
                scanf("%lf", &salario);
                if (salario <= 2000.00) {
                    resultado = salario * 1.15;
                } else {
                    resultado = salario * 1.10;
                }
                printf("Novo salario: R$ %.2f\n", resultado);
                break;
            case 2:
                printf("Salário: R$ ");
                scanf("%lf", &salario);
                if (salario <= 3000.00) {
                    resultado = salario * 0.08;
                } else {
                    resultado = salario * 0.15;
                }
                printf("Desconto de IR: R$ %.2f\n", resultado);
                break;
            case 3:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}