#include <stdio.h>
long fibonacci(int n);
int main(void) {
    int quantidade;
    printf("Quantidade de termos: ");
    scanf("%d", &quantidade);
    if (quantidade <= 0) {
        printf("A quantidade deve ser positiva.\n");
        return 1;
    }
    for (int i = 0; i < quantidade; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");
    return 0;
}
long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
/* A recursao recalcula termos e fica lenta para n grande. */
