#include <stdio.h>
#define DOBRO(x) x * 2
int dobro(int x);
int main(void) {
    printf("Macro sem protecao: %d\n", DOBRO(2 + 3)); /* Expande 2 + 3*2 = 8 */
    printf("Funcao: %d\n", dobro(2 + 3)); /* Recebe 5 e retorna 10 */
#undef DOBRO
#define DOBRO(x) ((x) * 2)
    printf("Macro protegida: %d\n", DOBRO(2 + 3));
    return 0;
}
int dobro(int x) { return x * 2; }
