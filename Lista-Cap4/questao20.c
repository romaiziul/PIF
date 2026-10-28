#include <math.h>
#include <stdio.h>

int main(void) {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada inválida.\n");
        return 1;
    }
    if (a == 0.0) {
        printf("O coeficiente a deve ser diferente de zero.\n");
        return 1;
    }

    delta = b * b - 4.0 * a * c;
    if (delta < 0.0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0.0) {
        x1 = -b / (2.0 * a);
        printf("Raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Raízes: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
