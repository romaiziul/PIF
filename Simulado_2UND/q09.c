/* Questao 09 - Simulado PIF */
#include <stdio.h>
/* Exercicio academico: reproduz as faixas do enunciado, nao uma avaliacao de saude. */
float calculaIMC(float peso, float altura);
void classificaIMC(float imc);
int main(void) {
    float peso, altura;
    if (scanf("%f %f", &peso, &altura) != 2 || peso <= 0 || altura <= 0) return 1;
    float imc = calculaIMC(peso, altura);
    printf("IMC: %.2f\n", imc);
    classificaIMC(imc);
    return 0;
}
float calculaIMC(float peso, float altura) {
    return peso / (altura * altura);
}
void classificaIMC(float imc) {
    if (imc < 18.5f) puts("Abaixo do peso");
    else if (imc < 25.0f) puts("Peso normal");
    else if (imc < 30.0f) puts("Sobrepeso");
    else puts("Obesidade");
}
