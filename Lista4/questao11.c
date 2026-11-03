#include <stdio.h>

int main(void) {
    int a, b, c, temporario;

    printf("Digite três números inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (a > b) {
        temporario = a;
        a = b;
        b = temporario;
    }
    if (b > c) {
        temporario = b;
        b = c;
        c = temporario;
    }
    if (a > b) {
        temporario = a;
        a = b;
        b = temporario;
    }

    if (a == b || b == c) {
        printf("Não existe ordem estritamente crescente: há valores repetidos.\n");
    } else {
        printf("Ordem crescente: %d < %d < %d\n", a, b, c);
    }

    return 0;
}
