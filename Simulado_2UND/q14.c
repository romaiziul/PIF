/* Questao 14 - Simulado PIF */
#include <stdio.h>
#include <string.h>
int main(void) {
    char mensagem[256];
    int k;
    /* fgets substitui gets, removida do padrao C11 por inseguranca. */
    if (!fgets(mensagem, sizeof mensagem, stdin)) return 1;
    mensagem[strcspn(mensagem, "\n")] = '\0';
    if (scanf("%d", &k) != 1) return 1;
    k = (k % 26 + 26) % 26;
    for (int i = 0; mensagem[i] != '\0'; i++)
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z')
            mensagem[i] = 'A' + (mensagem[i] - 'A' + k) % 26;
    puts(mensagem);
    return 0;
}
