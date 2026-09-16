#include <stdio.h>

int main(void)
{
    float horas_normais, horas_extras, salario_bruto, imposto, salario_liquido;

    printf("Digite o total de horas normais no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto = horas_normais * 10.00
                  + horas_extras * 15.00;

    imposto = (salario_bruto > 12000.00)
            ? (salario_bruto - 12000.00) * 0.10
            : 0.00;

    salario_liquido = salario_bruto - imposto;

    printf("Salário anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salário anual líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
