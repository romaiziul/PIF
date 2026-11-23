#include <stdio.h>
#include <string.h>
typedef struct { int hora,minuto; } Hora;
typedef struct { char placa[16]; Hora entrada,saida; } Veiculo;
int permanenciaMinutos(Veiculo v);
int main(void) {
    Veiculo v;
    int minutos,horasCobradas;
    printf("Placa: ");
    if(fgets(v.placa,sizeof(v.placa),stdin)==NULL) return 1;
    v.placa[strcspn(v.placa,"\n")]='\0';
    printf("Entrada (hora minuto): ");
    if(scanf("%d %d",&v.entrada.hora,&v.entrada.minuto)!=2) return 1;
    printf("Saida (hora minuto): ");
    if(scanf("%d %d",&v.saida.hora,&v.saida.minuto)!=2) return 1;
    if(v.entrada.hora<0||v.entrada.hora>23||v.saida.hora<0||v.saida.hora>23||
       v.entrada.minuto<0||v.entrada.minuto>59||v.saida.minuto<0||v.saida.minuto>59) {
        puts("Horario invalido."); return 1;
    }
    minutos=permanenciaMinutos(v);
    horasCobradas=(minutos+59)/60;
    printf("Placa: %s\nPermanencia: %d minutos\nTotal: R$ %.2f\n",v.placa,minutos,5.0f*horasCobradas);
    return 0;
}
int permanenciaMinutos(Veiculo v) {
    int entrada=v.entrada.hora*60+v.entrada.minuto;
    int saida=v.saida.hora*60+v.saida.minuto;
    if(saida<entrada) saida+=24*60; /* Saida no dia seguinte. */
    return saida-entrada;
}
