#include <stdio.h>
long potencia(int base, int expoente);
int main(void) {
    int base, expoente;
    printf("Digite base e expoente: ");
    scanf("%d %d", &base, &expoente);
    if (expoente < 0) {
        printf("Expoente deve ser nao negativo.\n");
        return 1;
    }
    printf("Resultado = %ld\n", potencia(base, expoente));
    return 0;
}
long potencia(int base, int expoente) {
    if (expoente == 0) return 1; /* Caso base */
    return base * potencia(base, expoente - 1); /* Passo recursivo */
}
