#include <stdio.h>
#include <math.h>

int main(void)
{
    float altura_degrau;
    float altura_total;
    float qtd;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura total desejada em metros: ");
    scanf("%f", &altura_total);

    altura_total = altura_total * 100;

    qtd = ceil(altura_total / altura_degrau);

    printf("Número mínimo de degraus: %.0f\n", qtd);

    return 0;
}
