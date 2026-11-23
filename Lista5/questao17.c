#include <stdio.h>
#include <limits.h>
long fatorialIterativo(int n);
long fatorialRecursivo(int n);
int main(void) {
    int n;
    long a,b;
    printf("Digite um inteiro nao negativo (0 a 20): ");
    if(scanf("%d",&n)!=1 || n<0 || n>20) { puts("Valor fora do intervalo."); return 1; }
    a=fatorialIterativo(n);
    b=fatorialRecursivo(n);
    printf("Iterativo: %ld\nRecursivo: %ld\n",a,b);
    puts(a==b?"Os resultados coincidem.":"Os resultados diferem.");
    return 0;
}
long fatorialIterativo(int n) {
    long r=1;
    for(int i=2;i<=n;i++) r*=i;
    return r;
}
long fatorialRecursivo(int n) {
    if(n<=1) return 1;
    return n*fatorialRecursivo(n-1);
}
