#include <stdio.h>
/* horas = segundos / 3600
minutos = (segundos % 3600) / 60
segundos = segundos % 60 */

int main(void) {
    int totalSec, hrs, min, sec;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSec);

    hrs = totalSec / 3600;
    min = (totalSec % 3600) / 60;
    sec = totalSec % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n", hrs, min, sec);

    return 0;
}