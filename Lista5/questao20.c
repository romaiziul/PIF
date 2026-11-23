#include <stdio.h>
int ehPrimo(int n);
int main(void) {
    int n;
    printf("Digite um inteiro: ");
    if(scanf("%d",&n)!=1) return 1;
    printf("%d %s primo.\n",n,ehPrimo(n)?"e":"nao e");
    puts("Primos de 1 ate 50:");
    for(int i=1;i<=50;i++) if(ehPrimo(i)) printf("%d ",i);
    putchar('\n');
    return 0;
}
int ehPrimo(int n) {
    if(n<2) return 0;
    for(int i=2;i<=n/i;i++) if(n%i==0) return 0;
    return 1;
}
