/* Questao 15 - Simulado PIF */
#include <stdio.h>
#include <string.h>
int main(void) {
    char convidados[5][30], nome[30];
    for (int i = 0; i < 5; i++) {
        if (!fgets(convidados[i], sizeof convidados[i], stdin)) return 1;
        convidados[i][strcspn(convidados[i], "\n")] = '\0';
    }
    if (!fgets(nome, sizeof nome, stdin)) return 1;
    nome[strcspn(nome, "\n")] = '\0';
    for (int i = 0; i < 5; i++) {
        if (strcmp(convidados[i], nome) == 0) {
            printf("Convidado encontrado na posicao %d.\n", i + 1);
            return 0;
        }
    }
    puts("Convidado nao encontrado.");
    return 0;
}
