#include <stdio.h>

int main(void)
{
    float velocidade;
    float resultado;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade);

    resultado = velocidade / 3.6;

    printf("Velocidade em m/s: %.2f\n", resultado);

    return 0;
}
