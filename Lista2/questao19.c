#include <stdio.h>

int main(void)
{
    int dias;
    float bruto;
    float imposto;
    float liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.00;
    imposto = bruto * 0.08;
    liquido = bruto - imposto;

    printf("Salário bruto: R$ %.2f\n", bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salário líquido: R$ %.2f\n", liquido);

    return 0;
}
