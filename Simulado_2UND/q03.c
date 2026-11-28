/* Questao 03 - Simulado PIF */
#include <stdio.h>
int main(void) {
    int idade, dia;
    float valor = 40.0f;
    if (scanf("%d %d", &idade, &dia) != 2 || idade < 0 || dia < 1 || dia > 7) return 1;
    if (idade < 12 || idade > 60 || dia == 4) valor /= 2;
    printf("R$ %.2f\n", valor);
    return 0;
}
