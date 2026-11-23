#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 256
int main(void) {
    char frase[TAM];
    int vogais=0,consoantes=0,espacos=0;
    printf("Digite uma frase: ");
    /* gets() foi removida da linguagem C por ser insegura. */
    if(fgets(frase,sizeof(frase),stdin)==NULL) return 1;
    frase[strcspn(frase,"\n")]='\0';
    for(size_t i=0;i<strlen(frase);i++) {
        unsigned char c=(unsigned char)frase[i];
        if(c==' ') espacos++;
        if(isalpha(c)) {
            c=(unsigned char)tolower(c);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vogais++;
            else consoantes++;
        }
    }
    printf("Vogais: %d\nConsoantes: %d\nEspacos: %d\n",vogais,consoantes,espacos);
    return 0;
}
/* Letras acentuadas exigem tratamento especifico para a codificacao usada. */
