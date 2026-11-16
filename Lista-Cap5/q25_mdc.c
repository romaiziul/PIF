#include <stdio.h>
int mdc(int a, int b);
void simplifica(int num, int den);
int main(void) {
    int a, b, num, den;
    printf("Digite dois inteiros positivos para o MDC: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Os valores devem ser positivos.\n");
        return 1;
    }
    printf("MDC = %d\n", mdc(a, b));
    printf("Numerador e denominador da fracao: ");
    scanf("%d %d", &num, &den);
    if (den == 0) {
        printf("Denominador nao pode ser zero.\n");
        return 1;
    }
    simplifica(num, den);
    return 0;
}
int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}
void simplifica(int num, int den) {
    int absNum = num < 0 ? -num : num;
    int absDen = den < 0 ? -den : den;
    int divisor = mdc(absNum, absDen);
    if (divisor == 0) {
        printf("Fracao indefinida.\n");
        return;
    }
    num /= divisor;
    den /= divisor;
    if (den < 0) { num = -num; den = -den; }
    printf("Fracao simplificada: %d/%d\n", num, den);
}
