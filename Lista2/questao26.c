#include <stdio.h>

int main(void)
{
    float comprimento, largura, preco, perimetro, metros_arame, custo;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preço do metro de arame: ");
    scanf("%f", &preco);

    perimetro = 2 * (comprimento + largura);
    metros_arame = perimetro * 3;
    custo = metros_arame * preco;

    printf("Metros de arame: %.2f m\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}
