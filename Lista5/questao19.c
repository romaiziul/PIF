#include <stdio.h>
void contagem(int n);
void contagemCrescente(int n);
int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    if(scanf("%d",&n)!=1 || n<=0) { puts("Valor invalido."); return 1; }
    puts("Regressiva:");
    contagem(n);
    puts("Crescente:");
    contagemCrescente(n);
    return 0;
}
void contagem(int n) {
    if(n==0) { puts("Fogo!"); return; }
    printf("%d\n",n);
    contagem(n-1); /* printf antes da recursao: n ate 1. */
}
void contagemCrescente(int n) {
    if(n==0) return;
    contagemCrescente(n-1); /* Recursao antes de printf: 1 ate n. */
    printf("%d\n",n);
}
