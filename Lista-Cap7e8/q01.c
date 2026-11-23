#include <stdio.h>
#define TAM 10
int main(void) {
    float notas[TAM], soma=0, maior, menor, media;
    int acima=0;
    for(int i=0;i<TAM;i++) {
        printf("Nota %d: ",i+1);
        if(scanf("%f",&notas[i])!=1 || notas[i]<0 || notas[i]>10) { puts("Nota invalida."); return 1; }
        soma+=notas[i];
        if(i==0 || notas[i]>maior) maior=notas[i];
        if(i==0 || notas[i]<menor) menor=notas[i];
    }
    media=soma/TAM;
    for(int i=0;i<TAM;i++) if(notas[i]>media) acima++;
    printf("Media: %.2f\nMaior: %.2f\nMenor: %.2f\nAcima da media: %d\n",media,maior,menor,acima);
    return 0;
}
