#include <stdio.h>

int main(void) {
    int idade, tempoServico;

    printf("Digite a idade e o tempo de serviço em anos: ");
    if (scanf("%d %d", &idade, &tempoServico) != 2 || idade < 0 || tempoServico < 0) {
        printf("Dados inválidos.\n");
        return 1;
    }

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda não pode se aposentar.\n");
    }

    return 0;
}
