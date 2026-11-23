#include <stdio.h>
int ehBissexto(int ano);
int main(void) {
    int ano;
    printf("Digite um ano: ");
    if(scanf("%d",&ano)!=1 || ano<=0) { puts("Ano invalido."); return 1; }
    printf("%d %s bissexto.\n",ano,ehBissexto(ano)?"e":"nao e");
    return 0;
}
int ehBissexto(int ano) { return ano%400==0 || (ano%4==0 && ano%100!=0); }
