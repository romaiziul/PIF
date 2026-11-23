#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define QTD 5
#define TAM 30
int main(void) {
    char nomes[QTD][TAM];
    int maior=0,menor=0,mesmaInicial=0;
    for(int i=0;i<QTD;i++) {
        printf("Nome %d: ",i+1);
        if(fgets(nomes[i],TAM,stdin)==NULL) return 1;
        nomes[i][strcspn(nomes[i],"\n")]='\0';
        if(strlen(nomes[i])>strlen(nomes[maior])) maior=i;
        if(strlen(nomes[i])<strlen(nomes[menor])) menor=i;
    }
    for(int i=0;i<QTD;i++) if(tolower((unsigned char)nomes[i][0])==tolower((unsigned char)nomes[0][0])) mesmaInicial++;
    printf("Mais longo: %s\nMais curto: %s\nMesma inicial do primeiro: %d\n",nomes[maior],nomes[menor],mesmaInicial);
    return 0;
}
