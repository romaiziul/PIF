#include <stdio.h>

void comFor() {
    int i;
    for (i = 0; i <= 100; i++) printf("%d ", i);
    printf("\n");
}

void comWhile() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void comDoWhile() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    comFor();
    comWhile();
    comDoWhile();
    return 0;
}

/* A mais adequada é o for: o número de repetições é conhecido (0 a 100) e
   inicialização, teste e incremento ficam reunidos em uma única linha. */