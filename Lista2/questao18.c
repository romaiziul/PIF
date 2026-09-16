#include <stdio.h>

int main(void)
{
    const double PI = 3.141593;
    double raio;
    double area;
    double volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Área da superfície: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);

    return 0;
}
