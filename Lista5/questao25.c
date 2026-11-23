#include <stdio.h>
int mdc(int a,int b);
void simplifica(int num,int den);
int main(void) {
    int a,b,num,den;
    printf("Digite dois inteiros positivos: ");
    if(scanf("%d %d",&a,&b)!=2||a<=0||b<=0) { puts("Valores invalidos."); return 1; }
    printf("MDC = %d\n",mdc(a,b));
    printf("Numerador e denominador positivos da fracao: ");
    if(scanf("%d %d",&num,&den)!=2||num<=0||den<=0) { puts("Fracao invalida."); return 1; }
    simplifica(num,den);
    return 0;
}
int mdc(int a,int b) { if(b==0) return a; return mdc(b,a%b); }
void simplifica(int num,int den) {
    int divisor=mdc(num,den);
    printf("Fracao simplificada: %d/%d\n",num/divisor,den/divisor);
}
