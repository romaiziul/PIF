#include <stdio.h>

int main(void) {
    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opção: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Opção inválida.\n");
        return 1;
    }

    switch (opcao) {
        case 1: printf("Direcionando para consulta de saldo...\n"); break;
        case 2: printf("Direcionando para emissão de extrato...\n"); break;
        case 3: printf("Direcionando para transferências...\n"); break;
        case 4: printf("Direcionando para atendimento...\n"); break;
        default: printf("Opção inválida.\n");
    }

    return 0;
}
