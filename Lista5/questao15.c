#include <stdio.h>
float mediaPonderada(float n1,float n2,float n3);
void exibeSituacao(float media);
int main(void) {
    float a,b,c,m;
    printf("Digite as tres notas: ");
    if(scanf("%f %f %f",&a,&b,&c)!=3) return 1;
    m=mediaPonderada(a,b,c);
    printf("Media ponderada = %.2f\n",m);
    exibeSituacao(m);
    return 0;
}
float mediaPonderada(float n1,float n2,float n3) { return (2*n1+3*n2+5*n3)/10.0f; }
void exibeSituacao(float media) {
    if(media>=5.0f) puts("Aprovado");
    else if(media>=3.0f) puts("Em Recuperacao");
    else puts("Reprovado");
}
