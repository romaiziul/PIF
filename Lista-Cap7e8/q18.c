#include <stdio.h>
#include <string.h>
#define QTD 3
#define TAM 60
int main(void) {
    char nomes[QTD][TAM],aux[TAM];
    for(int i=0;i<QTD;i++) {
        printf("Nome %d: ",i+1);
        if(fgets(nomes[i],TAM,stdin)==NULL) return 1;
        nomes[i][strcspn(nomes[i],"\n")]='\0';
    }
    for(int i=0;i<QTD-1;i++) for(int j=i+1;j<QTD;j++) if(strcmp(nomes[i],nomes[j])>0) {
        strcpy(aux,nomes[i]); strcpy(nomes[i],nomes[j]); strcpy(nomes[j],aux);
    }
    puts("Ordem alfabetica (comparacao lexicografica):");
    for(int i=0;i<QTD;i++) puts(nomes[i]);
    return 0;
}
