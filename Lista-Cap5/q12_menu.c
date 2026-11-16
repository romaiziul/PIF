#include <stdio.h>
void exibeMenu(void);
int main(void) {
    int opcao;
    exibeMenu();
    printf("Escolha: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1: printf("Cadastrar\n"); break;
        case 2: printf("Listar\n"); break;
        case 3: printf("Remover\n"); break;
        case 0: printf("Sair\n"); break;
        default: printf("Opcao invalida\n");
    }
    return 0;
}
void exibeMenu(void) {
    printf("1 - Cadastrar\n2 - Listar\n3 - Remover\n0 - Sair\n");
}
