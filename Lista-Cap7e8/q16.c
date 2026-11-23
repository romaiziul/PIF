#include <stdio.h>
#include <string.h>
#define TAM 128
int main(void) {
    const char senhaCorreta[]="c@esar2026";
    char senha[TAM];
    int tentativas=0;
    while(tentativas<3) {
        printf("Senha (%d de 3): ",tentativas+1);
        if(fgets(senha,sizeof(senha),stdin)==NULL) return 1;
        if(strchr(senha,'\n')==NULL && !feof(stdin)) {
            int c; while((c=getchar())!='\n'&&c!=EOF) {}
            puts("Senha muito longa.");
            continue;
        }
        senha[strcspn(senha,"\n")]='\0';
        if(strlen(senha)<6) { puts("A senha precisa ter no minimo 6 caracteres (nao conta tentativa)."); continue; }
        tentativas++;
        if(strcmp(senha,senhaCorreta)==0) { puts("Acesso liberado"); return 0; }
        puts("Senha incorreta.");
    }
    puts("Acesso bloqueado");
    return 0;
}
