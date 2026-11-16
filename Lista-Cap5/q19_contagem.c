#include <stdio.h>
void contagem(int n);
void contagemCrescente(int n);
int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("O valor deve ser positivo.\n");
        return 1;
    }
    printf("Regressiva:\n");
    contagem(n);
    printf("Crescente:\n");
    contagemCrescente(n);
    printf("Fogo!\n");
    return 0;
}
void contagem(int n) {
    if (n <= 0) { printf("Fogo!\n"); return; }
    printf("%d\n", n);
    contagem(n - 1);
}
void contagemCrescente(int n) {
    if (n <= 0) return;
    contagemCrescente(n - 1); /* Chamada antes do printf: imprime na volta */
    printf("%d\n", n);
}
