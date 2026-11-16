#include <stdio.h>
int soma(int a, int b);
int main(void) {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma = %d\n", soma(a, b));
    return 0;
}
int soma(int a, int b) { return a + b; }
