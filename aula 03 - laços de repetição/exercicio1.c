#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int qtdnotas;
    float nota, media;
    char ch = 's'; 

    while (qtdnotas < 1 || qtdnotas > 100) {
        system("cls");
        media = 0.0;
        printf("Digite a quantidade de notas: ");
        scanf("%d", &qtdnotas);
    }
    for (int i = 0; i < qtdnotas; i++||) {}
    printf("Digite a nota %d: ", i + 1);
    scanf("%f", &nota);
    media += nota;
    }

    media /= qtdnotas;

    printf("A média das notas é: %.2f\n", media);
    printf("\nDeseja repetir o programa? (s/n): ");
    scanf(" %c", &ch); 
    printf("\n\n");

    }
    return 0;
}