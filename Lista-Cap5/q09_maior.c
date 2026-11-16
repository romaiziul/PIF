#include <stdio.h>
int maior(int a, int b);
int main(void) {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Maior = %d\n", maior(a, b));
    return 0;
}
int maior(int a, int b) { return a > b ? a : b; }
