#include <stdio.h>
#define BLOCOS 3
#define ANDARES 2
#define APTOS 4
int main(void) {
    int ocup[BLOCOS][ANDARES][APTOS],geral=0;
    for(int b=0;b<BLOCOS;b++) {
        int total=0;
        for(int a=0;a<ANDARES;a++) for(int p=0;p<APTOS;p++) {
            printf("Bloco %d, andar %d, apartamento %d - moradores: ",b+1,a+1,p+1);
            if(scanf("%d",&ocup[b][a][p])!=1||ocup[b][a][p]<0) { puts("Numero invalido."); return 1; }
            total+=ocup[b][a][p];
        }
        printf("Total de moradores do bloco %d: %d\n",b+1,total);
        geral+=total;
    }
    printf("Total geral: %d\n",geral);
    return 0;
}
