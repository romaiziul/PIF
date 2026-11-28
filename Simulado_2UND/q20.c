/* Questao 20 - Simulado PIF */
#include <stdio.h>
typedef struct { int hora, minuto; } Horario;
int duracao(Horario ini, Horario fim);
int main(void) {
    Horario ini, fim;
    if (scanf("%d %d %d %d", &ini.hora, &ini.minuto, &fim.hora, &fim.minuto) != 4) return 1;
    if (ini.hora < 0 || ini.hora > 23 || fim.hora < 0 || fim.hora > 23 || ini.minuto < 0 || ini.minuto > 59 || fim.minuto < 0 || fim.minuto > 59) return 1;
    int minutos = duracao(ini, fim);
    if (minutos < 0) return 1;
    printf("%d minutos\n%dh%02dmin\n", minutos, minutos / 60, minutos % 60);
    return 0;
}
int duracao(Horario ini, Horario fim) {
    return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}
