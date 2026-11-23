#include <stdio.h>
#define TAM 100
int meuStrlen(char s[]);
void inverte(char s[]);
void removeChar(char s[],int pos);
int main(void) {
    char s[TAM];
    int pos;
    printf("Digite uma string: ");
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    int n=meuStrlen(s);
    if(n>0&&s[n-1]=='\n') s[n-1]='\0';
    printf("Comprimento: %d\n",meuStrlen(s));
    inverte(s);
    printf("Invertida: %s\n",s);
    printf("Posicao a remover (iniciando em 0): ");
    if(scanf("%d",&pos)!=1) return 1;
    if(pos<0||pos>=meuStrlen(s)) puts("Posicao invalida; string mantida.");
    else removeChar(s,pos);
    printf("Resultado: %s\n",s);
    return 0;
}
int meuStrlen(char s[]) { int i=0; while(s[i]!='\0') i++; return i; }
void inverte(char s[]) {
    int n=meuStrlen(s);
    for(int i=0;i<n/2;i++) { char aux=s[i]; s[i]=s[n-1-i]; s[n-1-i]=aux; }
}
void removeChar(char s[],int pos) {
    int n=meuStrlen(s);
    if(pos<0||pos>=n) return;
    for(int i=pos;i<n;i++) s[i]=s[i+1];
}
