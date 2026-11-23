#include <stdio.h>
#include <limits.h>
long potencia(int base,int expoente);
int main(void) {
    int b,e;
    printf("Base e expoente nao negativo: ");
    if(scanf("%d %d",&b,&e)!=2 || e<0) { puts("Expoente invalido."); return 1; }
    printf("Potencia = %ld\n",potencia(b,e));
    return 0;
}
long potencia(int base,int expoente) {
    /* Caso base: qualquer numero elevado a zero vale 1. */
    if(expoente==0) return 1;
    /* Passo recursivo: multiplica pela potencia de expoente menor. */
    return base*potencia(base,expoente-1);
}
/* Valores muito grandes podem exceder o limite de long. */
