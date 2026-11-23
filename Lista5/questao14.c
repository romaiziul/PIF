#include <stdio.h>
int somaDigitos(int n);
int main(void) { int n; printf("Inteiro positivo: "); if(scanf("%d",&n)!=1||n<=0) { puts("Numero invalido."); return 1; } printf("Soma dos digitos = %d\n",somaDigitos(n)); return 0; }
int somaDigitos(int n) { /* Caso base: resta um digito. */ if(n<10) return n; /* Passo recursivo: ultimo digito + restante. */ return n%10+somaDigitos(n/10); }
