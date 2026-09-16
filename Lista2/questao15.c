#include <stdio.h>

int main(void)
{
    float num1, num2, num3, num4;
    float media_simples;
    float media_ponderada;

    printf("Digite a nota 1: ");
    scanf("%f", &num1);

    printf("Digite a nota 2: ");
    scanf("%f", &num2);

    printf("Digite a nota 3: ");
    scanf("%f", &num3);

    printf("Digite a nota 4: ");
    scanf("%f", &num4);

    media_simples = (num1 + num2 + num3 + num4) / 4.0;

    media_ponderada = (num1 + num2 + 2 * num3 + 2 * num4) / 6.0;

    printf("Media simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}
