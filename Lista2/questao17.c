#include <stdio.h>

int main(void)
{
    const double PI = 3.141593;
    double raio;
    double area;
    double circ;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circ = 2 * PI * raio;

    printf("Área: %.2lf\n", area);
    printf("Circunferência: %.2lf\n", circ);

    return 0;
}
