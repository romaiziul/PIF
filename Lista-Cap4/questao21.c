#include <stdio.h>

int main(void) {
    double salario, percentual, aumento;
    int cargo;

    printf("Salário atual: R$ ");
    if (scanf("%lf", &salario) != 1 || salario < 0.0) {
        printf("Salário inválido.\n");
        return 1;
    }
    printf("Cargo (1 = Técnico; 2 = Gerente; 3 = Demais cargos): ");
    if (scanf("%d", &cargo) != 1) {
        printf("Código inválido.\n");
        return 1;
    }

    switch (cargo) {
        case 1: percentual = (salario <= 3000.0) ? 0.15 : 0.10; break;
        case 2: percentual = (salario <= 5000.0) ? 0.10 : 0.05; break;
        case 3: percentual = 0.08; break;
        default:
            printf("Código de cargo inválido.\n");
            return 1;
    }

    aumento = salario * percentual;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);
    return 0;
}
