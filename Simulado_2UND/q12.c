/* Questao 12 - Simulado PIF */
#include <stdio.h>
#define TAM 10
int main(void) {
    float temp[TAM], soma = 0, media;
    int pos = 0, acima = 0;
    for (int i = 0; i < TAM; i++) {
        if (scanf("%f", &temp[i]) != 1) return 1;
        soma += temp[i];
        if (temp[i] > temp[pos]) pos = i;
    }
    media = soma / TAM;
    for (int i = 0; i < TAM; i++) if (temp[i] > media) acima++;
    printf("Media: %.2f\nMaior: %.2f (dia %d)\nAcima da media: %d\n", media, temp[pos], pos + 1, acima);
    return 0;
}
