#include <stdio.h>

int main() {
    double valor, soma = 0;
    int qtd = 0;

    printf("Digite valores (negativo para parar): ");
    scanf("%lf", &valor);
    while (valor >= 0) {
        soma += valor;
        qtd++;
        scanf("%lf", &valor);
    }

    printf("Quantidade: %d\n", qtd);
    printf("Soma: %.2f\n", soma);
    if (qtd > 0) {
        printf("Média: %.2f\n", soma / qtd);
    } else {
        printf("Média: nenhum valor válido digitado\n");
    }
    return 0;
}