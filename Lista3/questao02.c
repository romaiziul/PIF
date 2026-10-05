#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}