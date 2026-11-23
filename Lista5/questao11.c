#include <stdio.h>
int ehPar(int n);
int main(void) { int n; printf("Inteiro: "); if(scanf("%d",&n)!=1) return 1; printf("%d e %s\n",n,ehPar(n)?"par":"impar"); return 0; }
int ehPar(int n) { return n%2==0; }
