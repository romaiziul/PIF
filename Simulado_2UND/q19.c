/* Questao 19 - Simulado PIF */
#include <stdio.h>
typedef enum { VISITANTE = 1, USUARIO, ADMIN } Nivel;
typedef struct {
    char nome[80];
    Nivel nivel;
} Usuario;
int main(void) {
    Usuario u;
    int nivel;
    if (scanf(" %79[^\n]", u.nome) != 1 || scanf("%d", &nivel) != 1) return 1;
    u.nivel = (Nivel)nivel;
    switch (u.nivel) {
        case VISITANTE: puts("apenas leitura"); break;
        case USUARIO: puts("leitura e escrita"); break;
        case ADMIN: puts("leitura, escrita e gerenciamento de usuários"); break;
        default: puts("Nivel invalido.");
    }
    return 0;
}
