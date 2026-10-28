#include <stdio.h>

int main(void) {
    double total, valorFinal, comissao;
    int pagamento;

    printf("Valor total da compra: R$ ");
    if (scanf("%lf", &total) != 1 || total <= 0.0) {
        printf("Valor inválido.\n");
        return 1;
    }
    printf("Pagamento (1 = à vista; 2 = parcelado em 3x): ");
    if (scanf("%d", &pagamento) != 1) {
        printf("Opção inválida.\n");
        return 1;
    }

    if (pagamento == 1) {
        valorFinal = total * 0.90;
        comissao = valorFinal * 0.05;
        printf("Valor com desconto: R$ %.2f\n", valorFinal);
        printf("Comissão: R$ %.2f\n", comissao);
    } else if (pagamento == 2) {
        comissao = total * 0.05;
        printf("Valor de cada parcela: R$ %.2f\n", total / 3.0);
        printf("Comissão: R$ %.2f\n", comissao);
    } else {
        printf("Opção de pagamento inválida.\n");
        return 1;
    }

    return 0;
}
