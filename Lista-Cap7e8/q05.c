#include <stdio.h>
#define TAM 8
int somaVetor(int v[],int n);
int maiorValor(int v[],int n);
int buscaValor(int v[],int n,int x);
int main(void) {
    int v[TAM],x;
    for(int i=0;i<TAM;i++) { printf("Valor %d: ",i+1); if(scanf("%d",&v[i])!=1) return 1; }
    printf("Valor a buscar: ");
    if(scanf("%d",&x)!=1) return 1;
    printf("Soma = %d\nMaior = %d\nPrimeira posicao de %d = %d\n",somaVetor(v,TAM),maiorValor(v,TAM),x,buscaValor(v,TAM,x));
    return 0;
}
int somaVetor(int v[],int n) { int s=0; for(int i=0;i<n;i++) s+=v[i]; return s; }
int maiorValor(int v[],int n) { int maior=v[0]; for(int i=1;i<n;i++) if(v[i]>maior) maior=v[i]; return maior; }
int buscaValor(int v[],int n,int x) { for(int i=0;i<n;i++) if(v[i]==x) return i; return -1; }
