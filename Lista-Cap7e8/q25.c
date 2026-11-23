#include <stdio.h>
enum Mes { Jan=1,Fev,Mar,Abr,Mai,Jun,Jul,Ago,Set,Out,Nov,Dez };
int main(void) {
    int mes;
    int dmes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Numero do mes (1 a 12): ");
    if(scanf("%d",&mes)!=1) return 1;
    switch(mes) {
        case Jan: puts("Janeiro"); break;
        case Fev: puts("Fevereiro"); break;
        case Mar: puts("Marco"); break;
        case Abr: puts("Abril"); break;
        case Mai: puts("Maio"); break;
        case Jun: puts("Junho"); break;
        case Jul: puts("Julho"); break;
        case Ago: puts("Agosto"); break;
        case Set: puts("Setembro"); break;
        case Out: puts("Outubro"); break;
        case Nov: puts("Novembro"); break;
        case Dez: puts("Dezembro"); break;
        default: puts("Mes invalido.");
    }
    puts("Dias em cada mes (ano nao bissexto):");
    for(enum Mes m=Jan;m<=Dez;m++) printf("Mes %d: %d dias\n",m,dmes[m-1]);
    return 0;
}
