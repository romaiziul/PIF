#include <stdio.h>
/* Para depurar: gcc -DDEBUG questao24.c -o questao24 */
/* Sem depuracao: gcc questao24.c -o questao24 */
/* DEBUG mostra a soma parcial a cada passo; sem DEBUG, mostra apenas o total. */
int somaAteN(int n);
int main(void) {
    int n;
    printf("Digite n nao negativo: ");
    if(scanf("%d",&n)!=1||n<0) { puts("Valor invalido."); return 1; }
    printf("Soma de 1 ate %d = %d\n",n,somaAteN(n));
    return 0;
}
int somaAteN(int n) {
    int soma=0;
    for(int i=1;i<=n;i++) {
        soma+=i;
        #ifdef DEBUG
        printf("Iteracao %d: soma parcial = %d\n",i,soma);
        #endif
    }
    return soma;
}
