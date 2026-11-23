#include <stdio.h>
int main(void) {
    int dmes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dia,mes,decorridos=0;
    printf("Dia e mes: ");
    if(scanf("%d %d",&dia,&mes)!=2 || mes<1 || mes>12) { puts("Data invalida."); return 1; }
    if(dia<1 || dia>dmes[mes-1]) { puts("Data invalida."); return 1; }
    for(int i=0;i<mes-1;i++) decorridos+=dmes[i];
    decorridos+=dia-1;
    printf("Dias completos decorridos desde 1 de janeiro: %d\nDias restantes apos esta data: %d\n",decorridos,364-decorridos);
    return 0;
}
