#include <stdio.h>
#define N 3
void imprimeTabuleiro(char tab[N][N]);
char verificaVencedor(char tab[N][N]);
int tabuleiroCheio(char tab[N][N]);
int main(void) {
    char tab[N][N]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char jogador='X';
    int linha,coluna;
    imprimeTabuleiro(tab);
    while(1) {
        printf("Jogador %c - linha e coluna (0 a 2): ",jogador);
        if(scanf("%d %d",&linha,&coluna)!=2) { puts("Entrada invalida."); return 1; }
        if(linha<0||linha>=N||coluna<0||coluna>=N||tab[linha][coluna]!=' ') {
            puts("Posicao invalida ou ocupada. Tente novamente.");
            continue;
        }
        tab[linha][coluna]=jogador;
        imprimeTabuleiro(tab);
        char vencedor=verificaVencedor(tab);
        if(vencedor!=' ') { printf("Jogador %c venceu!\n",vencedor); break; }
        if(tabuleiroCheio(tab)) { puts("Empate!"); break; }
        jogador=(jogador=='X')?'O':'X';
    }
    return 0;
}
void imprimeTabuleiro(char tab[N][N]) {
    puts("  0   1   2");
    for(int i=0;i<N;i++) {
        printf("%d %c | %c | %c\n",i,tab[i][0],tab[i][1],tab[i][2]);
        if(i<N-1) puts(" ---+---+---");
    }
}
char verificaVencedor(char tab[N][N]) {
    for(int i=0;i<N;i++) {
        if(tab[i][0]!=' '&&tab[i][0]==tab[i][1]&&tab[i][1]==tab[i][2]) return tab[i][0];
        if(tab[0][i]!=' '&&tab[0][i]==tab[1][i]&&tab[1][i]==tab[2][i]) return tab[0][i];
    }
    if(tab[1][1]!=' '&&tab[0][0]==tab[1][1]&&tab[1][1]==tab[2][2]) return tab[1][1];
    if(tab[1][1]!=' '&&tab[0][2]==tab[1][1]&&tab[1][1]==tab[2][0]) return tab[1][1];
    return ' ';
}
int tabuleiroCheio(char tab[N][N]) {
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) if(tab[i][j]==' ') return 0;
    return 1;
}
