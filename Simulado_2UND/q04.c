/* Questao 04 - Simulado PIF */
#include <stdio.h>
int main(void) {
    int idade;
    double renda, valor;
    if (scanf("%d %lf %lf", &idade, &renda, &valor) != 3) return 1;
    if (idade < 18 || idade > 70 || renda < 2000 || valor <= 0)
        puts("Empréstimo negado.");
    else if (valor > 10 * renda)
        puts("Valor acima do limite permitido.");
    else puts("Empréstimo aprovado!");
    return 0;
}
