#include <stdio.h>
#define DOBRO(x) x*2
int dobro(int x);
int main(void) {
    printf("Macro sem protecao: %d\n",DOBRO(2+3));
    printf("Funcao: %d\n",dobro(2+3));
    /* A macro expande para 2+3*2 (8), mas a funcao recebe 5 (10). */
    #undef DOBRO
    #define DOBRO(x) ((x)*2)
    printf("Macro corrigida: %d\n",DOBRO(2+3));
    return 0;
}
int dobro(int x) { return x*2; }
