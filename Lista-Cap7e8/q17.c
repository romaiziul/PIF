#include <stdio.h>
#include <string.h>
#define TAM 60
int main(void) {
    char nome[TAM],sobrenome[TAM],completo[TAM*2+3];
    printf("Primeiro nome: ");
    if(fgets(nome,sizeof(nome),stdin)==NULL) return 1;
    nome[strcspn(nome,"\n")]='\0';
    printf("Sobrenome: ");
    if(fgets(sobrenome,sizeof(sobrenome),stdin)==NULL) return 1;
    sobrenome[strcspn(sobrenome,"\n")]='\0';
    strcpy(completo,sobrenome);
    strcat(completo,", ");
    strcat(completo,nome);
    puts(completo);
    printf("Quantidade de caracteres: %zu\n",strlen(completo));
    return 0;
}
