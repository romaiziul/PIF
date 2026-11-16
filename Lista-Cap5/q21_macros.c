#include <stdio.h>
#define SQR(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(void) {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Quadrado de %d = %d\n", a, SQR(a));
    printf("Quadrado de %d = %d\n", b, SQR(b));
    printf("Maior = %d\nMenor = %d\n", MAX(a,b), MIN(a,b));
    return 0;
}
