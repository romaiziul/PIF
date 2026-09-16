#include <stdio.h>
#include <math.h>

int main(void)
{
    double lado_a;
    double lado_b;
    double hipotenusa;

    printf("Digite o primeiro cateto: ");
    scanf("%lf", &lado_a);

    printf("Digite o segundo cateto: ");
    scanf("%lf", &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2lf\n", hipotenusa);

    return 0;
}
