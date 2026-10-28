#include <math.h>
#include <stdio.h>

int main(void) {
    char operacao;
    double a, b, resultado;

    printf("Operações disponíveis: + - * / ^\n");
    printf("Escolha uma operação: ");
    if (scanf(" %c", &operacao) != 1) {
        printf("Operação inválida.\n");
        return 1;
    }
    printf("Digite os dois operandos: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Operandos inválidos.\n");
        return 1;
    }

    switch (operacao) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0.0) {
                printf("Erro: divisão por zero.\n");
                return 1;
            }
            resultado = a / b;
            break;
        case '^': resultado = pow(a, b); break;
        default:
            printf("Operação inválida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
