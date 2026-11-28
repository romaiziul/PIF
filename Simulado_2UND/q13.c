/* Questao 13 - Simulado PIF */
#include <stdio.h>
int main(void) {
    int vendas[4][3], totalProduto[3] = {0}, maior = 0;
    for (int i = 0; i < 4; i++) {
        int totalLoja = 0;
        for (int j = 0; j < 3; j++) {
            if (scanf("%d", &vendas[i][j]) != 1 || vendas[i][j] < 0) return 1;
            totalLoja += vendas[i][j];
            totalProduto[j] += vendas[i][j];
        }
        printf("Loja %d: %d\n", i + 1, totalLoja);
    }
    for (int j = 1; j < 3; j++) if (totalProduto[j] > totalProduto[maior]) maior = j;
    printf("Produto mais vendido: %d (%d unidades)\n", maior + 1, totalProduto[maior]);
    return 0;
}
