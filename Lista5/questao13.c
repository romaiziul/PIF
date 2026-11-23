#include <stdio.h>
float soma(float a,float b);
float subtrai(float a,float b);
float multiplica(float a,float b);
float divide(float a,float b);
int main(void) { int op; float a,b,r; puts("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao"); printf("Opcao: "); if(scanf("%d",&op)!=1||op<1||op>4) { puts("Opcao invalida."); return 1; } printf("Dois numeros: "); if(scanf("%f %f",&a,&b)!=2) return 1; if(op==4&&b==0) { puts("Divisao por zero."); return 1; } switch(op) { case 1:r=soma(a,b);break; case 2:r=subtrai(a,b);break; case 3:r=multiplica(a,b);break; default:r=divide(a,b); } printf("Resultado = %.2f\n",r); return 0; }
float soma(float a,float b){return a+b;}
float subtrai(float a,float b){return a-b;}
float multiplica(float a,float b){return a*b;}
float divide(float a,float b){return a/b;}
