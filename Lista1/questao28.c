#include <stdio.h>

int main(void) {
    int a, b, c;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("Média = %.2f\n", media);

    return 0;
}