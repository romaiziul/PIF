#include <stdio.h>
int somaAteN(int n);
int main(void) {
    int n;
    printf("Digite n positivo: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("O valor deve ser positivo.\n");
        return 1;
    }
    printf("Soma = %d\n", somaAteN(n));
    return 0;
}
int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("Apos somar %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
/* Sem depuracao: gcc q24_debug.c -o q24
   Com depuracao: gcc -DDEBUG q24_debug.c -o q24_debug */
