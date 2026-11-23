#include <stdio.h>
#include <string.h>
#define TAM 100
int ehPalindromo(char s[]);
int main(void) {
    char palavra[TAM];
    printf("Digite uma palavra: ");
    if(fgets(palavra,sizeof(palavra),stdin)==NULL) return 1;
    palavra[strcspn(palavra,"\n")]='\0';
    printf("%s\n",ehPalindromo(palavra)?"E palindromo.":"Nao e palindromo.");
    return 0;
}
int ehPalindromo(char s[]) {
    size_t n=strlen(s);
    for(size_t i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) return 0;
    return 1;
}
