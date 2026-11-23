#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define JOGOS 5
#define DEZENAS 6
int main(void) {
    int jogos[JOGOS][DEZENAS];
    srand((unsigned)time(NULL));
    for(int i=0;i<JOGOS;i++) {
        for(int j=0;j<DEZENAS;j++) {
            int num,repetido;
            do {
                repetido=0;
                num=rand()%60+1;
                for(int k=0;k<j;k++) if(jogos[i][k]==num) repetido=1;
            } while(repetido);
            jogos[i][j]=num;
        }
    }
    for(int i=0;i<JOGOS;i++) {
        printf("Jogo %d:",i+1);
        for(int j=0;j<DEZENAS;j++) printf(" %02d",jogos[i][j]);
        putchar('\n');
    }
    return 0;
}
