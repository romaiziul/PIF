#include <stdio.h>
typedef union { int i; float f; char c; } Valor;
typedef enum { INTEIRO,REAL,CARACTERE } Tipo;
typedef struct { Tipo tipo; Valor valor; } Registro;
int main(void) {
    Registro registros[3];
    for(int k=0;k<3;k++) {
        int tipo;
        printf("Registro %d - tipo (0 inteiro, 1 real, 2 caractere): ",k+1);
        if(scanf("%d",&tipo)!=1||tipo<0||tipo>2) { puts("Tipo invalido."); return 1; }
        registros[k].tipo=(Tipo)tipo;
        switch(registros[k].tipo) {
            case INTEIRO: printf("Inteiro: "); if(scanf("%d",&registros[k].valor.i)!=1) return 1; break;
            case REAL: printf("Real: "); if(scanf("%f",&registros[k].valor.f)!=1) return 1; break;
            case CARACTERE: printf("Caractere: "); if(scanf(" %c",&registros[k].valor.c)!=1) return 1; break;
        }
    }
    for(int k=0;k<3;k++) {
        switch(registros[k].tipo) {
            case INTEIRO: printf("Registro %d: %d\n",k+1,registros[k].valor.i); break;
            case REAL: printf("Registro %d: %.2f\n",k+1,registros[k].valor.f); break;
            case CARACTERE: printf("Registro %d: %c\n",k+1,registros[k].valor.c); break;
        }
    }
    printf("sizeof(Valor) = %zu bytes\n",sizeof(Valor));
    /* A union compartilha a mesma area de memoria entre seus campos.
       Seu tamanho suporta o maior membro, considerando alinhamento;
       nao e a soma dos tamanhos de int, float e char. */
    return 0;
}
