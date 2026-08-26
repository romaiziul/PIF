#include <stdio.h>


int main(void) {
    printf("%-10s %5s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %5s\n", "=========", "=====");
    printf("%-10s %5.1f\n", "ALINE", 9.0);
    printf("%-11s %5s\n", "MÁRIO", "DEZ");
    printf("%-11s %5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %5.1f\n", "SHIRLEY",7.0);

    return 0;
}