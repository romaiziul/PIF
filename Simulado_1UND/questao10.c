#include <stdio.h>

int main() {
    int total, hor, min, sec;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total);

    hor = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", hor, min, sec);
    return 0;
}