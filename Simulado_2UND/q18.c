/* Questao 18 - Simulado PIF */
#include <stdio.h>
typedef struct {
    char nome[80];
    int codigo;
    float salario;
} Funcionario;
int main(void) {
    Funcionario f[4];
    float soma = 0, media;
    int maior = 0;
    for (int i = 0; i < 4; i++) {
        if (scanf(" %79[^\n]", f[i].nome) != 1 || scanf("%d %f", &f[i].codigo, &f[i].salario) != 2) return 1;
        soma += f[i].salario;
        if (f[i].salario > f[maior].salario) maior = i;
    }
    media = soma / 4;
    printf("Maior salario: %s (codigo %d) - R$ %.2f\nMedia salarial: R$ %.2f\n", f[maior].nome, f[maior].codigo, f[maior].salario, media);
    for (int i = 0; i < 4; i++)
        if (f[i].salario < media) printf("%s: R$ %.2f\n", f[i].nome, f[i].salario * 1.10f);
    return 0;
}
