#include <stdio.h>
long fibonacci(int n);
int main(void) {
    int n;
    printf("Quantidade de termos (0 a 45): ");
    if(scanf("%d",&n)!=1||n<0||n>45) { puts("Quantidade invalida."); return 1; }
    for(int i=0;i<n;i++) printf("%ld%s",fibonacci(i),i==n-1?"\n":" ");
    if(n==0) putchar('\n');
    return 0;
}
long fibonacci(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
/* A recursao simples repete muitos calculos, crescendo exponencialmente em tempo. */
