#include <stdio.h>
#define TAMANHO 15
int main(void) {
    int vet[TAMANHO],n=0,num;
    while(1) {
        printf("Numero (0 encerra): ");
        if(scanf("%d",&num)!=1) return 1;
        if(num==0) break;
        if(n==TAMANHO) { puts("BUFFER LOTADO"); break; }
        vet[n++]=num;
        if(n==TAMANHO) { puts("BUFFER LOTADO"); break; }
    }
    puts("Ordem inversa:");
    for(int i=n-1;i>=0;i--) printf("%d ",vet[i]);
    putchar('\n');
    return 0;
}
