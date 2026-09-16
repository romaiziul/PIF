#include <stdio.h>

int main(void)
{
    float salario, gratificacao, imposto, liquido;

    printf("Digite o salário-base: ");
    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;

    liquido = salario + gratificacao - imposto;

    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salário líquido: R$ %.2f\n", liquido);

    return 0;
}

/*
líquido = salário + 5% do salário - 7% do salário
líquido = salário × 1,05 - salário × 0,07
*/